#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x; // Replace with your desired value
    cout << "Enter a value for x: ";
    cin >> x;

    assert(change_base(x, x + 1) == to_string(x));

    cout << "Test case passed." << endl;

    return 0;
}