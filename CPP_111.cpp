#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

bool issame(const std::map<char,int>& a, const std::map<char,int>& b){
    return a == b;
}

std::map<char,int> histogram(std::string test){
    std::map<char, int> result;
    std::stringstream ss(test);
    std::string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    std::map<char, int> maxOccurrences;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxOccurrences[entry.first] = entry.second;
        }
    }
    return maxOccurrences;
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}