#include <string>

bool cycpattern_check(std::string a, std::string b) {
    int lenA = a.length();
    int lenB = b.length();

    if (lenA < lenB) {
        return false;
    }

    std::string aDouble = a + a;

    for (int i = 0; i <= lenA - lenB; i++) {
        std::string substring = aDouble.substr(i, lenB);
        if (substring == b) {
            return true;
        }
    }

    return false;
}