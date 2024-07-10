#include <map>
#include <string>

bool issame(map<char,int> a,map<char,int> b){
    if(a.size() != b.size()) return false;
    for(auto& p : a) {
        if(b.find(p.first) == b.end() || p.second != b.at(p.first)) return false;
    }
    return true;
}

int main() {
    assert(issame(histogram("a") , {{'a', 1}}));
    map<char, int> histogram(string test) {
        map<char, int> result;
        string str = test;
        for (char c : str) {
            if (c != ' ') {
                if (result.find(c) == result.end()) {
                    result[c] = 1;
                } else {
                    result[c]++;
                }
            }
        }
        map<char, int> maxMap;
        int maxCount = 0;
        for (auto it = result.begin(); it != result.end(); ++it) {
            if (it->second > maxCount) {
                maxCount = it->second;
                maxMap = {{it->first, it->second}};
            } else if (it->second == maxCount) {
                maxMap[make_pair(it->first, it->second)] = it->second;
            }
        }
        return maxMap;
    }