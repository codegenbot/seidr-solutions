```cpp
#include <cstdlib>
#include <cctype>

#include <string>
#include <algorithm>

std::string string_to_md5(std::string s) {
    // implement your MD5 algorithm here
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    assert(string_to_md5(input).size() > 0);

    return 0;
}