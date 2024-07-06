#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int n = a.size();
    int m = b.size();

    for (int i = 0; i < n - m + 1; i++) {
        string s = a.substr(i, m);
        if (s == b || isRotation(s, b)) return true;
    }
    return false;

}

bool isRotation(string s1, string s2) {
    return (s1.size() == s2.size()) && ((s1 + s1).find(s2) != string::npos);
}