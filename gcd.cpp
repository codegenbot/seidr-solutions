int main() {
    string text, target;
    int a, b;
    cin >> a >> b;
    cin.ignore(); 
    getline(cin, text);
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);

    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}