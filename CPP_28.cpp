#include <iostream>
#include <string>
#include <vector>
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
    
    while(std::cin >> input){
        input_strings.push_back(input);
    }

    std::cout << concatenate(input_strings) << std::endl;
    
    return 0;
}