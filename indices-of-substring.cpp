int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    if (target.empty()) {
        cout << "0";
        return 0;
    }
    
    for (int i = 0; i <= (int)text.size() - (int)target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i = 0; i < (int)indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}