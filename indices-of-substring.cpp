int main() {
    string text, target;
    cin >> target >> text;
    
    vector<int> indices;
    size_t start = 0;
    
    while ((start = text.find(target, start)) != string::npos) {
        indices.push_back(start);
        start += 1;
    }
    
    for (int idx : indices) {
        cout << idx << " ";
    }
    
    return 0;
}