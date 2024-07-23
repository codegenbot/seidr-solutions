int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the newline character left in the buffer
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);
    
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}