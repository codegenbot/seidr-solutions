```cpp
#include <sstream>
#include <iostream>
#include <bitset>

using namespace std;

string toBinary(string s) {
    bitset<32> bs;
    for (char c : s) {
        if (c == '1') bs.flip();
    }
    return bs.to_string();
}

string string_xor(string a, string b) {
    istringstream is_a(toBinary(a)), is_b(toBinary(b));
    string result = "";
    char c, d;
    while (is_a >> c && is_b >> d) {
        if ((c - '0') ^ (d - '0')) {
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