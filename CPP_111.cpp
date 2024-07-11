#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

map<char,int> histogram(string test){
    map<char,int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char,int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }
    return maxChars;
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
}