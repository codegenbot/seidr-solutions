#include <variant>
#include <string>
#include <algorithm>

using namespace std;
using namespace boost;

std::variant<std::string, int, float> compare_one(std::variant<any> a, std::variant<any> b) {
    if (holds_alternative<int>(a) && holds_alternative<float>(b)) {
        return to_string(max(get<int>(a), get<float>(b)));
    } else if (holds_alternative<float>(a) && holds_alternative<std::string>(b)) {
        std::string s = get<std::string>(b);
        return to_string(max(get<float>(a), stof(s.erase(0, 1).erase(s.length() - 1))));
    } 
    else if (holds_alternative<std::string>(a) && holds_alternative<std::string>(b)) {
        return max(a, b).template get<std::string>();
    } 
    else if (holds_alternative<int>(a) && holds_alternative<int>(b)) {
        int aInt = get<int>(a);
        int bInt = get<int>(b);
        return to_string((aInt > bInt) ? aInt : bInt);
    } else {
        // Handle all other cases or unexpected inputs
        return 0;
    }
}