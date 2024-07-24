```cpp
variant<string, int, float> compare_one(variant<any> a, variant<any> b) {
    return visit([&](auto&& a, auto&& b) -> variant<string, int, float> {
        if (holds_alternative<string>(a) && holds_alternation<string>(b)) {
            string sA = get<string>(a);
            string sB = get<string>(b);
            if (sA > sB) {
                return "Greater";
            } else if (sA < sB) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
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