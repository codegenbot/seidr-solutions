#include <any>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

std::any compare(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (std::any_cast<int>(a) >= std::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (std::any_cast<float>(a) >= std::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(std::any_cast<string>(a)) >= stof(std::any_cast<string>(b))) ? a : b;
    }

    return a; // Handle other types, return the first argument by default
}

int main() {
    std::any int1, int2;
    cin >> std::any_cast<int>(int1) >> std::any_cast<int>(int2);
    
    assert(std::any_cast<int>(compare(int1, int2)) == std::any_cast<int>(compare(int1, int2)));

    return 0;
}