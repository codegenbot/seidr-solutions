#include <variant>
#include <string>
#include <algorithm>

using namespace std;

std::variant<std::string, int, float> compare_one(std::variant<any> a, std::variant<any> b) {
    if (holds_alternative<int>(a) && holds_alternation<float>(b)) {
        return to_string(max(get<int>(a), get<float>(b)));
    } else if (holds_alternation<float>(a) && holds_alternation<std::string>(b)) {
        std::string s = get<std::string>(b);
        return to_string(max(get<float>(a), stof(s.erase(0, 1).erase(s.length() - 1))));
    } 
    else if (holds_alternation<std::string>(a) && holds_alternation<int>(b)) {
        int aInt = get<int>(b);
        string s = get<string>(a);
        return to_string((stoi(s) > aInt) ? stoi(s) : aInt);
    } 
    else if (holds_alternation<std::string>(a) && holds_alternation<std::string>(b)) {
        string s1 = get<string>(a), s2 = get<string>(b);
        return max(s1, s2).template get<std::string>();
    } 
    else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
        int aInt = get<int>(a), bInt = get<int>(b);
        return to_string((aInt > bInt) ? aInt : bInt);
    } 
    else {
        // Handle all other cases or unexpected inputs
        return 0;
    }
}