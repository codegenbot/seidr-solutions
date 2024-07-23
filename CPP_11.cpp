#include <sstream>
#include <iostream>

using namespace std;

string string_xor(string a, string b) {
    istringstream is_a(a), is_b(b);
    string result = "";
    for (char c; is_a >> c && is_b >> c; ) {
        if ((c - '0') ^ ('0' - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "The XOR of " << a << " and " << b << " is " << string_xor(a, b) << endl;
    return 0;
}