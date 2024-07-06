```cpp
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(auto str : a) {
        bool found = false;
        for(auto other_str : b) {
            if(str == other_str) {
                found = true; break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{{"grunt","prune"}}));
    return 0;
}