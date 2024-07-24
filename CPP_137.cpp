#include <variant>
#include <string>

std::variant<std::string, int, float> compare_one(std::variant<any> a, std::variant<any> b) {
    return visit([&](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (holds_alternative<std::string>(a) && holds_alternative<std::string>(b)) {
            if (get<std::string>(a) > get<std::string>(b)) {
                return "Greater";
            } else if (get<std::string>(a) < get<std::string>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternative<any>(a) && holds_alternation<any>(b)) {
            return "Non";
        } else if (holds_alternative<int>(a) && holds_alternation<int>(b)) {
            int aInt = get<int>(a);
            int bInt = get<int>(b);
            if (aInt > bInt) {
                return "Greater";
            } else if (aInt < bInt) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternation<float>(a) && holds_alternation<float>(b)) {
            float aFloat = get<float>(a);
            float bFloat = get<float>(b);
            if (aFloat > bFloat) {
                return "Greater";
            } else if (aFloat < bFloat) {
                return "Less";
            } else {
                return "Equal";
            }
        } else {
            return "Non";
        }
    }, a, b);
}