#include<iostream>
#include<map>
#include<sstream>
#include<cmath>
#include<cassert>
using namespace std;

map<char,int> histogram(string test);
bool issame(map<char,int> a, map<char,int> b);

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("hello world"), {{'l', 3}, {'o', 2}}));
    assert(issame(histogram("banana"), {{'a', 3}, {'n', 2}}));
  
    cout << "All test cases passed!" << endl;
    
    return 0;
}

map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    
    stringstream ss(test);
    string word;
    while(ss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for(auto it = result.begin(); it != result.end(); it++){
        maxCount = max(maxCount, it->second);
    }
    
    map<char, int> maxLetters;
    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second == maxCount){
            maxLetters[it->first] = it->second;
        }
    }
    
    return maxLetters;
}

bool issame(map<char,int> a, map<char,int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(auto it = a.begin(); it != a.end(); it++){
        char c = it->first;
        if(b.find(c) == b.end() || b[c] != a[c]){
            return false;
        }
    }
    
    return true;
}