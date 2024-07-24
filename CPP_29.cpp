```c++
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date", "elderberry"};
    string prefix = "ap";
    vector<string> result = filter_by_prefix(strings, prefix);
    assert(issame(result, {"apple"}));
    return 0;
}