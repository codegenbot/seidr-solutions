int main() {
    string input;
    getline(cin, input);
    vector<string> words;
    string word = "";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != ' ' && input[i] != '-') {
            word += input[i];
        } else {
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);

    cout << words[0];
    for (int i = 1; i < words.size(); i++) {
        string firstLetter = words[i].substr(0, 1);
        string restOfWord = words[i].substr(1);
        cout << char(toupper(firstLetter[0])) << restOfWord;
    }
    return 0;
}