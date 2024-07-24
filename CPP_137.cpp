#include <iostream>
#include <string>
#include <variant>
#include <algorithm>

using namespace std;

variant<int, string> compare_one(variant<int, string> a, variant<int, string> b) {
    if (holds_alternative<int, string>(a) > holds_alternative<int, string>(b)) {
        return a;
    } else if (holds_alternative<int, string>(b) > holds_alternative<int, string>(a)) {
        return b;
    } else if (get<string>(a) != "" && get<string>(b) != "") {
        double numA = stod(get<string>(a));
        double numB = stod(get<string>(b));
        if (numA > numB) {
            return a;
        } else if (numB > numA) {
            return b;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}