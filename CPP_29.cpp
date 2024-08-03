bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings = {"hello", "world", "hell", "helloworld"};
    string prefix = "hel";
    vector<string> result = filter_by_prefix(strings, prefix);
    // your implementation here
    return 0;
}