```cpp
#include <iostream>
#include <string>
#include <cassert>

long long solve(int n) {
    std::string str = (n < 0 ? "-" : "");
    do {
        str = (n % 2 == 0 ? "0" : "1") + str;
        n /= 2;
    } while(n > 0);
    return (str.length() == 0 ? -1 : std::stoll(str.c_str(), nullptr, 2));
}

int main() {
    if (std::to_string(solve(963)) != "1010") {
        assert(false);
    }
    return 0;
}