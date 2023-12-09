```
#include <iostream>
#include <string>

int main() {
    int x = 123;
    std::cout << "The number in base 10 is: " << change_base(x, 10) << std::endl;
    return 0;
}

std::string change_base(int x, int base) {
    // Use the fully qualified name for to_string
    std::string result = std::to_string(x);
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}
```