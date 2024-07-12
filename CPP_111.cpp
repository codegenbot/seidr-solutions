#include <map>
#include <vector>
#include <string>

using namespace std;

bool issame(map<pair<char,int>, bool> a, map<pair<char,int>, bool> b) {
    if(a.size() != b.size()) return false;
    for(auto& pair : a) {
        if(b.find(pair) == b.end()) 
            return false;
    }
    return true;
}

map<pair<char,int>, int> histogram(string test) {
    map<pair<char,int>, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique(letters.begin(), letters.end())) {
        int count = 0;
        for (char letter : letters) {
            if (letter == c) count++;
        }
        for(int i=0; i<count; i++) {
            pair<char,int> p = make_pair(c, i);
            result[p] = 1;
        }
    }

    map<pair<char,int>, int> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            for (const auto& p : result) {
                if (p.second == maxCount) {
                    maxCountMap[p.first] = p.second;
                }
            }
        } else if (pair.second == maxCount) {
            maxCountMap[pair.first] = pair.second;
        }
    }

    return maxCountMap;
}

int main() {
    assert(issame(histogram("a"), {{'a', 0}}));
}