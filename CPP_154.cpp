#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    for (int i = 0; i <= n - m; i++) {
        if (a.substr(i, m).compare(b) == 0 || a.substr(0, m).compare(b) == 0) {
            return true;
        }
    }

    for (int i = 1; i < m; i++) {
        string rotated_b = b;
        for (int j = 0; j < m - 1; j++) {
            char temp = rotated_b[0];
            rotated_b.erase(0, 1);
            rotated_b += temp;
        }
        if (a.find(rotated_b) != string::npos || a.find(b) != string::npos) {
            return true;
        }
    }

    return false;
}