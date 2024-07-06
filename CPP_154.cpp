#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < b.length(); i++) {
        for (int j = 0; j <= b.length() - a.length(); j++) {
            if (a.substr(j, a.length()).find(b.substr(i, b.length())) != string::npos)
                return true;
        }
    }
    return false;
}