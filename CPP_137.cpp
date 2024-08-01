#include <string>
#include <iostream>
#include <algorithm>

std::string compare_one(std::string a, float b) {
    if (atof(a.c_str()) > b)
        return "a";
    else
        return "b";
}

int main() {
    std::cout << compare_one("1.5", 2.0) << std::endl;
    return 0;
}