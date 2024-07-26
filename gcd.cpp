int main() {
    int a = 175443, b = 398651;
    cout << gcd(a, b) << endl;

    string text = "175443", target = "398651";
    vector<int> result = indicesOfSubstring(text, target);

    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}