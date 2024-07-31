Here is the modified code:

```cpp
#include <cctype>
#include <algorithm>
#include <iostream>

int hex_key(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](char c){return tolower(c);});
    int result = 0;
    for (char c : s) {
        if (isalnum(c)) {
            result++;
        }
    }
    return result;

}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int output = hex_key(input);
    std::cout << "The number of alphanumeric characters is: " << output << std::endl;
}