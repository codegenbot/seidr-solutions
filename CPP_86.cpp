#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1) {
            res += s[i];
        }
    }
    return res;
}

return 0;