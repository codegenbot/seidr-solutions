#include <string>
using namespace std;

string decode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x[1];
        output += x;
    }
    return output;
}