```c++
bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), ' ') == a[i].end())
            continue;
        if (find(b[i].begin(), b[i].end(), ' ') == b[i].end()) 
            return false;
    }
    return true;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // ...
}