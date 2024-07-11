```cpp
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<string> strings1 = {"apple", "banana", "apricot"};
    vector<string> strings2 = {"apple", "orange", "apricot"};

    assert(issame(filter_by_prefix(strings1, "app"), filter_by_prefix(strings2, "app")));

    return 0;
}