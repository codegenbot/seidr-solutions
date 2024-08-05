int main() {
    int a, b;
    string text, target;
    
    cin >> a >> b;
    cin >> text >> target;
    
    cout << gcd(a, b) << endl;
    
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}