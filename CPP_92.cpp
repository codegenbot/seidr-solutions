```
#include <iostream>
#include <cmath>

bool any_int(int a, int b, int c) {
    std::string s = std::to_string(a);
    s += std::to_string(b);
    s += std::to_string(c);
    return (s.find("ABC") != std::string::npos);
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
```