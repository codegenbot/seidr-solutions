#include <iostream>
#include <string>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) > any_cast<double>(b)) {
        return a;
    } else if (any_cast<double>(a) < any_cast<double>(b)) {
        return b;
    } else {
        return "None";
    }
}

int main() {
    any a = 10.5; 
    any b = 12.7;

    any result = compare_one(a, b);

    if (any_cast<string>(result) == "None") {
        cout << "No comparison possible." << endl;
    } else if (holds_alternative<double>(result)) {
        cout << "Result: " << any_cast<double>(result) << endl;
    } else {
        cout << "Result: None" << endl;
    }

    return 0;
}