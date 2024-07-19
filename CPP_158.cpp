int main() {
    vector<string> words;
    string input;
    while (cin >> input) {
        words.push_back(input);
    }
    cout << find_max(words) << endl;
}