```
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

string string_xor(string a, string b) {
    istringstream is_a(a), is_b(b);
    string result = "";
    char c;
    while (is_a >> c && is_b >> c) {
        if ((c - '0') ^ ('0' - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;

}