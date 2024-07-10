bool issame(map<char, int> a, map<char, int> b) {
    if(a.size() != b.size()) return false;
    for(auto p : a) {
        if(b.find(p.first) == b.end() || b.at(p.first) != p.second) return false;
    }
    return true;
}