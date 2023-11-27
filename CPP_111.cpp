#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

bool issame(std::map<char,int> a, std::map<char,int> b){
    return a == b;
}

std::map<char,int> histogram(std::string test){
    std::map<char, int> result;
    if(test.empty()){
        return result;
    }
    
    std::stringstream ss(test);
    std::string word;
    while(ss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for(auto it = result.begin(); it != result.end(); it++){
        maxCount = std::max(maxCount, it->second);
    }
    
    std::map<char, int> maxLetters;
    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second == maxCount){
            maxLetters[it->first] = it->second;
        }
    }
    
    return maxLetters;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    // Add more test cases here
    
    return 0;
}