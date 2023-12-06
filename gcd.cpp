```
int main() {
    int a, b;
    while (true) {
        cout << "Enter two integers separated by a space: ";
        cin >> a >> b;
        if (cin.fail()) {
            // Input was not successful, so prompt the user again
            continue;
        } else {
            // Input was successful, so break out of the loop
            break;
        }
    }
    
    cout << gcd(a, b) << endl;
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
```