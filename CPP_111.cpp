#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    // Implementation of issame function
    for (auto const &pair : a) {
        if (b.find(pair.first) == b.end() || b[pair.first] != pair.second) {
            return false;
        }
    }
    for (auto const &pair : b) {
        if (a.find(pair.first) == a.end() || a[pair.first] != pair.second) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases for issame function
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(!issame(histogram("ab"), {{'a', 1}}));
    assert(issame(histogram("listen"), histogram("silent")));

    return 0;
}

map<char, int> histogram(string test){
    // Implementation of the histogram function
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