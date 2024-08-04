int main() {
    int a, b;
    cout << "Enter two integers separated by a space: ";
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    string text, target;
    cout << "Enter text and target string separated by a space: ";
    cin.ignore();
    getline(cin, text);
    getline(cin, target);
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}