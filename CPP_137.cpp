#include <iostream>
#include <string>
#include <variant>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (get<int>(a) > get<int>(b)) {
        return a;
    } else if (get<int>(b) > get<int>(a)) {
        return b;
    } else if (get<string>(a) != "" && get<string>(b) != "") {
        double numA = stod(get<string>(a));
        double numB = stod(get<string>(b));
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

int main() {
    any a = 10; // Example input
    any b = 5;   // Example input

    any result = compare_one(a, b);

    if (holds_alternative<string, int>(result)) {
        cout << get<int>(result) << endl;
    } else {
        cout << "None" << endl;
    }

    return 0;
}