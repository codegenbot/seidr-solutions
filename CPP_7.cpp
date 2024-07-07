```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto& s : strings) {
        if(s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(auto s : a) {
        bool found = false;
        for(auto t : b) {
            if(s == t) {
                found = true; break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}