```cpp
#include <string>
#include <iostream>
#include <algorithm>
#include <hash_map>

std::string cppString_to_md5(std::string text) {
    std::hash<std::string> string_hash;
    size_t hash_value = string_hash(text);
    return std::to_string(hash_value);
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;

    std::string result = cppString_to_md5(input);
    std::cout << "MD5 of the input string is: " << result << std::endl;
    return 0;
}