#include <variant>
#include <string>

std::variant<std::string, int, float> compare_one(std::variant<any> a, std::variant<any> b) {
    if (holds_alternative<int>(a) && holds_alternation<float>(b)) {
        return to_string(max(get<int>(a), get<float>(b)));
    } else if (holds_alternation<float>(a) && holds_alternation<std::string>(b)) {
        std::string s = get<std::string>(b);
        return to_string(max(get<float>(a), stof(s.erase(0, 1).erase(s.length() - 1))));
    } 
    else if (holds_alternation<std::string>(a) && holds_alternation<std::string>(b)) {
        return max(a, b).template get<std::string>();
    } 
    else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
        int aInt = get<int>(a);
        int bInt = get<int>(b);
        return to_string((aInt > bInt) ? aInt : bInt);
    }
    // Handle all other cases or unexpected inputs
    return 0;
}