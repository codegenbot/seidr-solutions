int main() {
    int a, b;
    cin >> a >> b;
    cin.ignore(); // Add cin.ignore(); here to consume the newline character
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> result = indicesOfSubstring(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}