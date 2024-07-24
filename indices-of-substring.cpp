int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int idx : indices) {
        cout << idx << " ";
    }
    
    return 0;
}