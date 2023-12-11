```
#include <iostream>
#include <cmath>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (auto it = num.begin(); it != num.end(); ++it) {
        if (isPrime(*it - '0')) count++;
    }
    return count;
}

int main() {
    std::cout << "Enter a hexadecimal number: ";
    std::string input;
    std::cin >> input;
    int key = hex_key(input);
    std::cout << "The number of prime digits in the hexadecimal number is: " << key << std::endl;
    return 0;
}
```