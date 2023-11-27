#include <string>

bool cycpattern_check(std::string a, std::string b) {
    int n = a.length();
    int m = b.length();

    if (m > n) {
        return false;
    }

    std::string temp = b + b;

    for (int i = 0; i <= n - m; i++) {
        std::string sub = temp.substr(i, m);
        if (sub == a) {
            return true;
        }
    }

    return false;
}