vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty() || text.empty() || target.size() > text.size()) return indices;
    
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    string target, text;
    cin >> target >> text;

    vector<int> indices = findSubstringIndices(text, target);
    
    cout << indices.size() << endl;
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}