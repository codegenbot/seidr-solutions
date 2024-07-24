#include <iostream>
#include <variant>
#include <any>
#include <string>

using namespace std;

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

int main() {
    string input1;
    int input2;

    cout << "Enter the first value: ";
    cin >> input1;

    cout << "Enter the second value: ";
    cin >> input2;

    auto result = compare_one(any(input1), any(input2));

    if (holds_alternative<string>(result)) {
        cout << "The comparison is: " << get<string>(result) << endl;
    } else if (holds_alternative<int>(result)) {
        int value = get<int>(result);
        cout << "The comparison is: " << value << endl;
    } else {
        float value = get<float>(result);
        cout << "The comparison is: " << value << endl;
    }

    return 0;
}