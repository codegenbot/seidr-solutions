int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndicesOfSubstring(text, target);
    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}