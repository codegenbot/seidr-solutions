```
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    std::cout << "Length of the string is: " << input.size() << std::endl;
    return 0;
}
```