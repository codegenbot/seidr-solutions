#include <string>
#include <vector>
#include <iostream>

std::string concatenate(std::vector<std::string> strings){
    std::string result;
    for(const std::string& s : strings){
        result += s;
    }
    return result;
}

int main(){
    std::vector<std::string> input = {"x", "y", "z", "w", "k"};
    std::string output = concatenate(input);
    std::cout << output << std::endl;
    return 0;
}