#include <string>
#include <cassert>

string decode_cyclic(string s);

string decode_cyclic(string s) {
    int l = s.length();
    string decoded_str;
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        decoded_str += x;
    }
    return decoded_str;
}