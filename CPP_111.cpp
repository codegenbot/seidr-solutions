```cpp
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <set>

using namespace std;

std::map<char, int> histogram(string test) {
    std::map<char, int> result;
    if (test.empty()) return result;

    set<char> uniqueChars;
    for (char c : test) { 
        uniqueChars.insert(c);
    }

    for (char c : uniqueChars) { 
        int count = 0;
        for (char letter : test) {
            if (letter == c) count++;
        }
        if (count > 0) result[c] = count;
    }

    return result;
}

bool isSame(const map<char,int>& a, const map<char,int>& b){
    if(a.size() != b.size()) return false;
    for(auto p : a) {
        auto it = b.find(p.first);
        if(it == b.end() || it->second != p.second) return false;
    }
    return true;

int main() {
    string test;
    cout << "Enter a string: ";
    cin >> test;
    
    map<char, int> hist = histogram(test);
    
    for (auto p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}