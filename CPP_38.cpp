#include <string>
using namespace std;

string decode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string output;
    int i;
    for (i = 0; i * 3 < l; ) {
        // cycle elements in each group. Unless group has fewer elements than 3.
        x = s.substr(i * 3, min(3, l - i * 3));
        if (x.length() == 1) {
            output += x;
            continue;
        }
        if (x.length() == 2) {
            output += x[1] + x[0];
        } else {
            output += x.substr(1) + x[0];
        }
    }
    return output;
}