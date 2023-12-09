```cpp
#include <iostream>
#include <string>
#include <cstring>

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    std::cout << "Length of the string is: " << input.size() << std::endl;

    // Insert a character at the beginning of the string
    std::string::iterator __p = input.begin();
    input.insert(__p, 'a');

    return 0;
}
```