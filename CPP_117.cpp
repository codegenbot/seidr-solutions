int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);

    cout << "Words with exactly " << n << " consonants: ";
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}