```cpp
bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), substring) == string::npos)
            return false;
    }
    return true;
}

int main() {
    assert(same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}