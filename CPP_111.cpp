#include <bits/stdc++.h>
using namespace std;

bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

map<char, int> histogram(string test);

int main() {
    assert (issame(histogram("a") , {{'a', 1}}));
    return 0;
}

map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> counts;
    
    for (char& c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : counts) {
        maxCount = max(maxCount, pair.second);
    }
    
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}