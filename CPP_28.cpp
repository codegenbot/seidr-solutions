#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings){
    std::string result;
    for(const std::string& str : strings){
        result += str;
    }
    return result;
}

int main(){
    std::cout << "Enter strings separated by spaces: ";
    std::vector<std::string> strings;
    std::string input;
    std::getline(std::cin, input);

    size_t pos = 0;
    while ((pos = input.find(' ')) != std::string::npos) {
        strings.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    strings.push_back(input);

    std::string concatenated = concatenate(strings);
    std::cout << "Concatenated string: " << concatenated << std::endl;
    
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");

    return 0;
}