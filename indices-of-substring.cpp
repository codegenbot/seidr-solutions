int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    int len_text = text.length();
    int len_target = target.length();
    
    for (int i = 0; i <= len_text - len_target; ++i) {
        if (text.substr(i, len_target) == target) {
            indices.push_back(i);
        }
    }
    
    for (int i : indices) {
        cout << i << " ";
    }
    
    return 0;
}