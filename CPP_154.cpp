#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    std::string temp = b + b;
    return (temp.find(a) != std::string::npos);
}

std::string a, b;
std::cin >> a >> b;

std::cout << cycpattern_check(a, b) << "\n";

return 0;