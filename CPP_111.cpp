#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

std::map<char,int> histogram(std::string test){
    std::map<char,int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    std::map<char,int> maxCountChars;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxCountChars[entry.first] = entry.second;
        }
    }
    return maxCountChars;
}

bool issame(std::map<char,int> a, std::map<char,int> b){
    return a == b; 
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}