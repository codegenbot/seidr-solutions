#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test){
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    
    map<char, int> result;
    int maxFreq = 0;
    for (const auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxFreq) {
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