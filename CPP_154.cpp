#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if (temp.length() >= b.length()) {
            int j = 0;
            while (j < b.length()) {
                if (temp[j] != b[j]) break;
                j++;
            }
            if (j == b.length()) return true;
        }
    }
    return false;
}