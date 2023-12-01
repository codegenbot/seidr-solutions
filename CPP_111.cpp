#include <map>
#include <cassert>
#include <string>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b);

map<char, int> histogram(string test) {
    map<char, int> freqMap;
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

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}