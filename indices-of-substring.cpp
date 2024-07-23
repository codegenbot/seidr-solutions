int main() {
    string text, target;
    cin >> target >> text;
    
    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos++;
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}