#include <string>
#include <cassert>

std::string encrypt(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = c + 2 * (c >= 'a' ? 1 : -1);
            if ((c >= 'a' && encrypted > 'z') || (c <= 'Z' && encrypted > 'Z')) {
                encrypted -= 26;
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "c");
    return 0;
}