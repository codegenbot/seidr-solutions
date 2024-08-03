int main() {
    // Add your code here to read inputs and call functions
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}