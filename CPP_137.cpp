#include <iostream>
#include <string>
#include <any>
#include <variant>

using namespace std;

variant<int, string> compare_one(any a, any b) {
    if (get<int>(a) > get<int>(b)) {
        return a;
    } else if (get<int>(b) > get<int>(a)) {
        return b;
    } else if ((any_cast<string>(a) != "") && (any_cast<string>(b) != "")) {
        double numA = stod(any_cast<string>(a));
        double numB = stod(any_cast<string>(b));
        if (numA > numB) {
            return a;
        } else if (numB > numA) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}