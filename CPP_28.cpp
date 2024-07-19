#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(std::vector<std::string> strings){
    std::string result;
    for(const std::string& s : strings){
        result += s;
    }
    return result;
}

int main(){
    std::vector<std::string> input_strings;
    std::string input;

    std::cout << "Enter strings to concatenate (separated by spaces): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    while (iss >> input) {
        input_strings.push_back(input);
    }

    std::string concatenated_result = concatenate(input_strings);
    std::cout << "Concatenated result: " << concatenated_result << std::endl;

    return 0;
}