#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<string> a, std::vector<string> b);

std::vector<string> filter_by_substring(std::vector<string> strings, std::string substring){
    std::vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    // Your main function code here
    return 0;
}