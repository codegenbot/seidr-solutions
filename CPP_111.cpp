#include <iostream>
#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b){
    return a == b;
}

std::map<char, int> histogram(std::string test){
    std::map<char, int> freq;
    int maxFreq = 0;
    
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
            maxFreq = std::max(maxFreq, freq[c]);
        }
    }
    
    std::map<char, int> result;
    for (auto it : freq) {
        if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}})); 
    // Add more test cases with assert
    
    return 0;
}