```c++
bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>{1, 4, 5}));
}