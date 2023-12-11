```cpp
#include <iostream>
#include <string>
#include <cassert>

int hex_key(const std::string& num) {
    int count = 0;
    for (auto it = num.begin(); it != num.end(); ++it) {
        if (isPrime(*it - '0')) count++;
    }
    return count;
}

int main() {
    std::string num;
    std::cin >> num;
    assert(hex_key(std::stoi(num)) == 0);
    return 0;
}
```