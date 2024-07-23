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
    string a = "0101";
    string b = "0000";
    cout << string_xor(a, b) << endl;
    return 0;
}