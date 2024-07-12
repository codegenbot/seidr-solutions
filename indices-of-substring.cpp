int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos++;
    }
    
    for (int i : indices) {
        cout << i << " ";
    }
    
    return 0;
}