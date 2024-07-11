int main() {
    // Get input for integers
    int a, b;
    cin >> a >> b;
    
    // Get input for text and target string
    string text, target;
    cin >> text >> target;
    
    // Call gcd function
    cout << gcd(a, b) << endl;
    
    // Call indicesOfSubstring function
    vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    
    return 0;
}