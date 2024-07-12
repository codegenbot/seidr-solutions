#include <map>
#include <vector>
#include <string>

using namespace std;

bool issame(map<pair<char,bool>, bool> a, map<pair<char,bool>, bool> b) {
    if(a.size() != b.size()) return false;
    for(auto& pair : a) {
        if(b.find(pair) == b.end()) 
            return false;
    }
    return true;
}

map<pair<char,bool>, bool> histogram(string test) {
    map<pair<char,bool>, bool> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique(letters.begin(), letters.end())) {
        int count = 0;
        for (char letter : letters) {
            if (letter == c) count++;
        }
        for(int i=0; i<count; i++) {
            pair<char,bool> p = make_pair(c, false);
            result[p] = true;
        }
    }

    map<pair<char,bool>, bool> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second) {
            maxCountMap[pair.first] = true;
        }
    }

    return maxCountMap;
}

int main() {
    assert(issame(histogram("a"), {{'a', 0}, {'a', 1}}));
}