#include <stdio.h>
#include <string>
using namespace std;

string encode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string s) {
    int l = s.length();
    string output;
    for (int i = 0; i < l; i++) {
        if ((i + 1) * 3 <= l) {
            if ((s.substr(i * 3, 1) == s.substr((i + 1) * 3 - 2, 1)) ||
                (i * 3 + 2 >= l && i * 3 + 1 < l && s[i * 3 + 1] == s[0])) {
                output += s.substr(i * 3, 3);
            } else {
                output += s.substr(i * 3, 1) + s.substr((i + 1) * 3 - 2, 1) +
                          s.substr(i * 3, 1);
            }
        } else {
            output += s.substr(i * 3, l % 3);
        }
    }
    return output;
}