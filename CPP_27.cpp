```cpp
#include <iostream>
#include <cctype>
#include <string>
#include <cassert>

std::string flip_case(std::string str) {
    std::string result = "";
    for (char c : str) {
        result += (isalpha(c)) ? (c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c) : c;
    }
    return result;
}

int main() {
    std::string input = "These violent delights have violent ends";
    std::string output = flip_case(input);
    std::cout << "Computed output: " << output << std::endl;
    std::string expectedOutput = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
    assert(output == expectedOutput);
    return 0;
}