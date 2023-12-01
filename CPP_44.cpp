#include <iostream>
#include <string>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x = x / base;
    }
    return result;
}

int main() {
    int x;
    cin >> x; // Read input value for x

    // Call the change_base function with appropriate arguments
    change_base(x, x + 1);

    return 0;
}