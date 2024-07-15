#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& vec, const std::string& substr){
    std::vector<std::string> result;
    for(const auto& str : vec){
        if(str.find(substr) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Your code goes here
    return 0;
}