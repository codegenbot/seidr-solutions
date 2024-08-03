#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(const string& test) {
    map<char, int> result;
    map<char, int> count;
    
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto &pair : count) {
        maxCount = max(maxCount, pair.second);
    }
    
    for (const auto &pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}

int main() {
    assert(histogram("a") == map<char,int>{{'a', 1}});
    
    cout << "Test passed successfully!" << endl;
    
    return 0;
}