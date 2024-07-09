#include <map>

map<char, int> histogram(string s) {
    map<char, int> hist;
    for (char c : s) {
        hist[c]++;
    }
    return hist;
}

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }
    
    return true;
}