```
#include <iostream>
#include <string>
#include <cmath>

int hex_key(std::string num) {
    int count = 0;
    for (auto it = num.begin(); it != num.end(); ++it) {
        if (isPrime(*it - '0')) count++;
    }
    return count;
}

int main() {
    std::string num;
    std::cin >> num;
    std::cout << hex_key(num) << std::endl;
    return 0;
}
```