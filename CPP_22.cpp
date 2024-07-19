#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> filter_integers(const std::vector<char>& input){
    std::vector<int> result;
    for(char c : input){
        if(isdigit(c)){
            result.push_back(c - '0');
        }
    }
    return result;
}