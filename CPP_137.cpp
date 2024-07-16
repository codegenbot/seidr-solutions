```
#include <iostream>
#include <string>

using namespace std;

variant<int, float, string> compare_one(int a, string b) {
    int b_int = stoi(b);
    if (a > b_int) {
        return variant<int, float, string>(a);
    }
    else if (a == b_int) {
        return "Equal";
    }
    else {
        return variant<int, float, string>(b_int);
    }
}

int main() {
    int a = 5;
    string b = "10.0";
    variant<int, float, string> result = compare_one(a, b);

    if (holds_alternative<int>(result)) {
        int i = get<int>(result);
        cout << "The result is: " << i << endl;
    }
    else if (holds_alternation