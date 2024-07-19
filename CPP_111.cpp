#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <set>

using namespace std;

std::map<char, int> histogram(string test) {
    std::map<char, int> result;
    if (test.empty()) return result;

    set<char> uniqueChars(test.begin(), test.end());

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
}

int main() {
    cout << (isSame(histogram("a"), histogram("b")) ? "True" : "False") << endl;
    return 0;
}