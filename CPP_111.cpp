#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <cassert>

bool issame(map<char, int> a, map<char, int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(auto it : a){
        if(b.find(it.first) == b.end() || b[it.first] != it.second){
            return false;
        }
    }
    return true;
}

map<char, int> histogram(string test){
    map<char, int> result;
    istringstream iss(test);
    string word;
    while(iss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    int maxCount = 0;
    for(auto it : result){
        maxCount = max(maxCount, it.second);
    }
    map<char, int> res;
    for(auto it : result){
        if(it.second == maxCount){
            res[it.first] = it.second;
        }
    }
    return res;
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here
    return 0;
}