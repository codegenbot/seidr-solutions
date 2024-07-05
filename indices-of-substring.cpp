vector<int> findSubstringIndices(const string& text, const string& target) {
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
    cin >> target;
    cin >> text;
    
    vector<int> indices = findSubstringIndices(text, target);
    cout << indices.size() << endl;
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}