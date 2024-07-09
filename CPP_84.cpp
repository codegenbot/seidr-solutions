#include <iostream>
#include <string>

long long solve(int n) {
    std::string binary;
    std::string str = (n < 0 ? "-" : "");
    do {
        str.insert(0, n % 2 == 0 ? "0" : "1");
        n /= 2;
    } while(n > 0);
    binary = str;
    return (binary.length() == 0 ? -1 : std::stoll(binary.c_str(), nullptr, 2));
}

int main() {
    assert(solve(963) == 1010);
    return 0;
}