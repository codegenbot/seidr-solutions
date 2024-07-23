#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string string_xor(string a, string b) {
    if(a.length() != b.length()) {
        throw runtime_error("Strings must be of same length");
    }
    string result = "";
    for(int i = 0; i < a.length(); i++) {
        if((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

return 0;