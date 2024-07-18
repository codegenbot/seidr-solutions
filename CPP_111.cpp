#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

map<char, int> histogram(string test){
    map<char, int> result;
    istringstream iss(test);
    string word;
    while(iss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (const auto &elem : a) {
        if (b.find(elem.first) == b.end() || b[elem.first] != elem.second) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}