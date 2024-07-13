int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    for (int i = 0; i <= (int)text.size() - (int)target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }

    for (int index : indices) {
        cout << index << " ";
    }
    
    return 0;
}