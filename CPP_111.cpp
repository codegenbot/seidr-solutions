#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b);

std::map<char, int> histogram(std::string test);

bool issame(std::map<char, int> a, std::map<char, int> b){
    return a == b;
}

std::map<char, int> histogram(std::string test){
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for(char& c : word){
            result[c]++;
        }
    }
    int maxCount = 0;
    for(auto& pair : result){
        maxCount = std::max(maxCount, pair.second);
    }
    std::map<char, int> res;
    for(auto& pair : result){
        if(pair.second == maxCount){
            res[pair.first] = pair.second;
        }
    }
    return res;
}

int main(){
    assert(issame(histogram("a") , {{'a', 1}}));
    return 0;
}