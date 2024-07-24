#include <string>
#include <variant>
#include <any>

using std::any;

variant<std::string, int, float> compare_one(variant<any> a, variant<any> b) {
    return visit([&](auto&& a, auto&& b) -> variant<std::string, int, float> {
        if (holds_alternative<std::string>(a) && holds_alternative<std::string>(b)) {
            if (std::get<std::string>(a) > std::get<std::string>(b)) {
                return "Greater";
            } else if (std::get<std::string>(a) < std::get<std::string>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternative<int>(a) && holds_alternative<int>(b)) {
            int aInt = std::get<int>(a);
            int bInt = std::get<int>(b);
            if (aInt > bInt) {
                return "Greater";
            } else if (aInt < bInt) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternative<float>(a) && holds_alternative<float>(b)) {
            float aFloat = std::get<float>(a);
            float bFloat = std::get<float>(b);
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