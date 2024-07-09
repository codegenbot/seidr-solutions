#include <iostream>
#include <string>

long long solve(int n) {
    std::string binary;
    while(n > 0) {
        if(n % 2 == 0)
            binary.insert(0, "0");
        else
            binary.insert(0, "1");
        n /= 2;
    }
    return (binary.length() == 0 ? -1 : std::stoll(binary.c_str(), nullptr, 2));
}

int main() {
    assert(solve(963) == 1010);
    return 0;
}