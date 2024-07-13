int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    int tlen = target.length();
    for (int i = 0; i <= text.length() - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}