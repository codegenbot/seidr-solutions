#include <map>
#include <vector>
#include <string>
#include <set>

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

    set<char> letters(test);
    for (char c : letters) {
        int count = 0;
        for (char letter : test) {
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
    map<pair<char, int>, bool> maxCountMap = histogram("a");
    map<pair<char,int>,bool> expected{{make_pair('a',0),true},{make_pair('b',1),false}};
    assert(issame(maxCountMap,expected));
}