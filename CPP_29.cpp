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
    vector<string> strings;
    string prefix;

    cout << "Enter the list of strings: ";
    while(getline(cin, prefix)) {
        strings.push_back(prefix);
    }

    cout << "Enter the prefix to filter by: ";
    getline(cin, prefix);

    vector<string> result = filter_by_prefix(strings, prefix);

    assert(issame(result, {"hello1", "hello2"})); // This is where the issue was!

    return 0;
}