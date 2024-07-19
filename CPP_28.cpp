#include <iostream>
#include <sstream>
#include <vector>
#include <cassert>

std::string concatenate(const std::vector<std::string>& input_strings) {
    std::string result;
    for (const std::string& str : input_strings) {
        result += str;
    }
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<std::string> input_strings;
    std::stringstream iss_input(input);
    while (iss_input >> input) {
        input_strings.push_back(input);
    }

    assert(concatenate(input_strings) == "xyzwk");

    return 0;
}