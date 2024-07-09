#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j <= a.size() - b.size(); j++) {
            bool isPattern = true;
            for (int k = 0; k < b.size(); k++) {
                if (a[j + k] != b[k]) {
                    isPattern = false;
                    break;
                }
            }
            if (isPattern) return true;
        }
    }
    return false;
}