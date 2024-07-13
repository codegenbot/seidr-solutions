int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += 1;
    }
    
    for (int idx : indices) {
        cout << idx << " ";
    }
    
    return 0;
}