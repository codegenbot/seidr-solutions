#include <iostream>
#include <map>
#include <cassert>

bool issame(std::map<char,int> a, std::map<char,int> b){
    for(auto it = a.begin(); it != a.end(); ++it) {
        if(b.find(it->first) == b.end() || b[it->first] != it->second)
            return false;
    }
    for(auto it = b.begin(); it != b.end(); ++it) {
        if(a.find(it->first) == a.end())
            return false;
    }
    return true;
}

std::map<char,int> histogram(std::string test){
    std::map<char, int> countMap;
    std::string word;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        } else {
            if (countMap.find(word[0]) == countMap.end()) {
                countMap[word[0]] = 1;
            } else {
                countMap[word[0]]++;
            }
            word = "";
        }
    }
    if (word != "") {
        if (countMap.find(word[0]) == countMap.end()) {
            countMap[word[0]] = 1;
        } else {
            countMap[word[0]]++;
        }
    }
    int maxCount = 0;
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    std::map<char, int> result;
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}

int main() {
    // Testing code
}