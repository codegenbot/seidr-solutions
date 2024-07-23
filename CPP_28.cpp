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
    std::vector<std::string> strs = {"x", "y", "z", "w", "k"};
    std::string result = concatenate(strs);
    std::cout << result << std::endl;
    return 0;
}