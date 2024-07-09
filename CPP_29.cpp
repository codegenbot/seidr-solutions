```c++
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!std::equal(a[i].begin(), a[i].end(), b[i].begin())) return false;
    }
    return true;
}

int main() {
    vector<string> strings;
    string prefix, input;
    cout << "Enter the strings: ";
    while (getline(cin, input)) {
        strings.push_back(input);
    }
    cout << "Enter the prefix: ";
    getline(cin, prefix);
    vector<string> result = filter_by_prefix(strings, prefix);
    if (!issame(result, strings))
        cout << "The result does not contain all strings from input." << endl;
    return 0;
}