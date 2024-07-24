#include <variant>
#include <string>
#include <algorithm>

using namespace std;

variant<string, int, float> compare_one(variant<any> a, variant<any> b) {
    if (holds_alternative<int>(a) && holds_alternative<float>(b)) {
        return max(get<int>(a), get<float>(b));
    } else if (holds_alternative<float>(a) && holds_alternative<string>(b)) {
        string s = get<string>(b);
        return max(get<float>(a), stof(s.erase(0, 1).erase(s.length() - 1)));
    } else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        return max(a, b);
    } else if (holds_alternative<int>(a) && holds_alternative<int>(b)) {
        return a == b ? "None" : max(get<int>(a), get<int>(b));
    } else if (holds_alternative<float>(a) && holds_alternative<float>(b)) {
        return get<float>(a) > get<float>(b) ? get<float>(a) : get<float>(b);
    }
    return "None";
}