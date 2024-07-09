```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string& s) {
    std::string res = "";
    res += s;
    res.pop_back();
    return res;
}

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::cin >> input_string;
    std::cout << "Anti-shuffled string: " << anti_shuffle(input_string) << std::endl;
    return 0;
}