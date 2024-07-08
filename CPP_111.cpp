```c++
#include <map>
#include <cassert>

bool issame(map<char,int> a,map<char,int> b) {
    if(a.size() != b.size()) return false;
    for(auto& p : a) {
        if(!b.count(p.first) || b[p.first] != p.second) return false;
    }
    return true;
}

map<char,int> histogram(string str) {
    map<char,int> m;
    for (char c : str) {
        m[c]++;
    }
    return m;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}