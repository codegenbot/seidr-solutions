#include <string>
#include <algorithm>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    using namespace std;
    return visit([](auto&& a, auto&& b) -> variant<string, int, float> {
        if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
            if (get<string>(a) > get<string>(b)) {
                return get<string>(a);
            } else {
                return "0";
            }
        } else if (holds_alternative<int>(a) && holds_alternation<int>(b)) {
            int x = get<int>(a), y = get<int>(b);
            return to_string(max(x, y));
        } else if (holds_alternative<float>(a) && holds_alternation<float>(b)) {
            float x = get<float>(a), y = get<float>(b);
            return to_string(max(x, y));
        }
        return "0";
    }, a, b);
}