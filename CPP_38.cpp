#include <string>
#include <cassert>

string encode_cyclic(string str) {
    string output;
    int i;
    for (i = 0; i * 3 < str.length(); i++) {
        string x = str.substr(i * 3, 3);
        if (x.length() == 3) 
            x = x.substr(1, 2) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string str) {
    string output;
    string chr;
    int i;
    for (i = 0; i * 3 < str.length(); i++) {
        string x = str.substr(i * 3, 3);
        if (x.length() == 3) {
            chr = x[2];
            x = chr + x.substr(0, 2);
        }
        output += x;
    }
    return output;
}