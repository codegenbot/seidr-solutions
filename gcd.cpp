```
int main() {
    string input;
    while (getline(cin, input)) {
        int a = stoi(input.substr(0, input.find(' ')));
        int b = stoi(input.substr(input.find(' ') + 1));
        cout << gcd(a, b) << endl;
    }
    return 0;
}
```