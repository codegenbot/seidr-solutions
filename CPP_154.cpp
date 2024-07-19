#include <iostream>
#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }

    std::string temp = b + b;

    return (temp.find(a) != std::string::npos);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;

    std::cout << (cycpattern_check(a, b) ? "true" : "false") << std::endl;

    return 0;
}