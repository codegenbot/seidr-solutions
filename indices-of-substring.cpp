int main() {
    string text, target;
    cin >> text;
    cin >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1)
            cout << " ";
    }
    return 0;
}