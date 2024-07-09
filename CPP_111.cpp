#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(map<char,int> a, map<char,int> b);

map<char, int> histogram(string test);

bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for (auto it : result) {
        maxCount = max(maxCount, it.second);
    }
    
    map<char, int> res;
    for (auto it : result) {
        if (it.second == maxCount) {
            res[it.first] = it.second;
        }
    }
    
    return res;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}