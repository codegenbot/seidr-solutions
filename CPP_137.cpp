#include <any>
#include <iostream>
#include <string>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (any_cast<float>(a) > any_cast<float>(b)) {
        return a;
    } else if (any_cast<float>(a) == any_cast<float>(b)) {
        return "None";
    }
    return b;
}