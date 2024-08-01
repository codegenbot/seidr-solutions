vector<int> result;
int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    return 0;
}