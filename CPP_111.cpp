#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

bool issame(map<char, int> a, map<char, int> b) {
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
    assert(issame(histogram("a"), {{'a', 1}}));

    // Additional test cases as required by contest problem
    assert(issame(histogram("ab"), {{'a', 1}, {'b', 1}}));
    assert(issame(histogram("hello"), {{'h', 1}, {'e', 1}, {'l', 2}, {'o', 1}}));
    
    cout << "All test cases passed successfully." << endl;

    return 0;
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
    return result;
}