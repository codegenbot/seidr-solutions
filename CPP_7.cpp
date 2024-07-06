```cpp
bool issame(vector<string> a,vector<string>b){
    for(auto s : b) {
        if(!find_if(a.begin(), a.end(),[&](const string& str)->(s.find(str) != string::npos)) return false;
    }
    return true;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}