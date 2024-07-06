map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()) return result;
    string str = test;
    for(char c : str){
        if(c != ' ') result[c]++;
    }
    int maxCount = 0;
    for(auto &p : result) {
        if(p.second > maxCount) maxCount = p.second;
    }
    map<char,int> res;
    for(auto &p : result) {
        if(p.second == maxCount) res[p.first] = p.second;
    }
    return res;
}