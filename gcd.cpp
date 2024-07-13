```cpp
#include <iostream>
#include <cmath>

std::string gcd(std::string a, std::string b) {
    while (b != "0") {
        int temp = stoi(b);
        b = to_string(stoi(a) % temp);
        a = to_string(temp);
    }
    return a;
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}