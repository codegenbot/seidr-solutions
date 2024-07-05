vector<int> indices_of_substring(const string &text, const string &target) {
    vector<int> indices;
    size_t pos = text.find(target);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    string target, text;
    getline(cin, target);
    getline(cin, text);
    vector<int> result = indices_of_substring(text, target);
    cout << result.size() << endl;
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}