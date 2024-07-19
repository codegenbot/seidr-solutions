bool issame(map<char,int> a,map<char,int> b){
    if(a.size()!=b.size())return false;
    for(auto p:a){
        if(b.find(p.first)==b.end() || b[p.first]!=p.second)return false;
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    for (char c : unique(test.begin(), test.end())) {
        result[c] = count(test.begin(), test.end(), c);
    }

    return result;
}