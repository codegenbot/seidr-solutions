int main() {
    string s;
    int n;
    cout << "Enter a sentence: ";
    cin >> s;
    cout << "Enter the maximum number of vowels allowed in each word: ";
    cin >> n;
    vector<string> result = select_words(s, n);
    for (string str : result) {
        cout << str << endl;
    }
}
```