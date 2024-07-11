#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);
bool issame(const map<char, int>& a, const map<char, int>& b);

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

bool issame(const map<char, int>& a, const map<char, int>& b){
    return a == b;
}

int main(){
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}