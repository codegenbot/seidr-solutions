```cpp
bool areStringsEqual(vector<string> a,vector<string>b){
    return a==b;
}
vector<string> filterBySubstring(vector<string> str,string sub) {
    vector<string> filtered;
    for(auto s : str){
        if(!s.find(sub))filtered.push_back(s);
    }
    return filtered;
}

int test() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered;
    filtered = filterBySubstring(str, "run"); 
    assert(areStringsEqual({""},filtered)); 
    return 0;
}