#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); ++i) {
        for (int j = 0; j <= a.length() - b.length(); ++j) {
            bool found = true;
            int k = 0;
            while (k < b.length()) {
                if (a[j + k] != b[k]) {
                    found = false;
                    break;
                }
                k++;
            }
            if (found) return true;
        }
    }
    return false;
}