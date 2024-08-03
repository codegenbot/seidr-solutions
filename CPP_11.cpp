#include <string>
#include <cassert>

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}