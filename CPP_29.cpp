```cpp
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> a = {"hello", "world", "cpp"};
    vector<string> b = {"hello", "world", "cpp"};
    assert(issame(a, b));
    return 0;
}