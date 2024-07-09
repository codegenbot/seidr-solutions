#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    if(a.length() != b.length()) return false;
    std::string temp = b + b;
    return (temp.find(a) != std::string::npos);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << std::boolalpha << cycpattern_check(a, b) << std::endl;

    return 0;
}