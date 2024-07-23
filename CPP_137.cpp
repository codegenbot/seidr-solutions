#include <iostream>
#include <string>
#include <boost/any.hpp>

int solve(const std::string& s) {
    int num = std::stoi(s);
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}