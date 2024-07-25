int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> result;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        result.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}