#include <variant>
#include <string>
#include <any>

using std::any;

variant<string, int, float> compare_one(variant<any> a, variant<any> b) {
    return visit([&](auto&& a, auto&& b) -> variant<string, int, float> {
        if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
            if (get<string>(a) > get<string>(b)) {
                return "Greater";
            } else if (get<string>(a) < get<string>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternative<int>(a) && holds_alternative<int>(b)) {
            int aInt = get<int>(a);
            int bInt = get<int>(b);
            if (aInt > bInt) {
                return "Greater";
            } else if (aInt < bInt) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternative<float>(a) && holds_alternative<float>(b)) {
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