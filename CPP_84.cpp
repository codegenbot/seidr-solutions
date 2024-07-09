```cpp
#include <iostream>
#include <string>
#include <cassert>

long long solve(int n) {
    std::string str = (n < 0 ? "-" : "");
    do {
        str = (n % 2) + '0' + str;
        n /= 2;
    } while(n > 0);
    return (str.length() == 0 ? -1 : std::stoll(str.c_str(), nullptr, 2));
}

int main() {
    assert(solve(963) == 1010);
    return 0;
}