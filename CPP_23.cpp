```
#include <iostream>
#include <string>
#include <cstring>

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    int length = input.size();
    std::cout << "Length of the string is: " << length << std::endl;
    return 0;
}
```