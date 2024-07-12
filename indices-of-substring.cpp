int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices;
    
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos++;
    }
    
    for (int i : indices) {
        cout << i << " ";
    }
    
    return 0;
}