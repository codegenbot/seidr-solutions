#include <iostream>
#include <unordered_map>
#include <cassert>

using namespace std;

unordered_map<char, int> histogram(string test) {
    unordered_map<char, int> freqMap;
    string word;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        } else {
            freqMap[word]++;
            word = "";
        }
    }
    if (!word.empty()) {
        freqMap[word]++;
    }
    return freqMap;
}

bool issame(unordered_map<char,int> a, unordered_map<char,int> b){
    if (a.size() != b.size())
        return false;
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b[pair.first] != pair.second)
            return false;
    }
    return true;
}

int main() {
    assert (issame(histogram("a"), {{'a', 1}}));
    assert (issame(histogram("a b c"), {{'a', 1}, {'b', 1}, {'c', 1}}));
    assert (issame(histogram("hello world"), {{'hello', 1}, {'world', 1}}));
    assert (issame(histogram("a b b c c c"), {{'a', 1}, {'b', 2}, {'c', 3}}));

    cout << "All tests pass." << endl;

    return 0;
}