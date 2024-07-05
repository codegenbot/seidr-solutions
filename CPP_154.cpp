#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    string temp = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(temp.substr(i, len)) != string::npos) {
            return true;
        }
    }
    return false;
}