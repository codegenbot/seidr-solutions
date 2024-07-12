int main() {
    string input, word;
    vector<string> words;
    getline(cin, input);
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '-') {
            words.push_back(word);
            word = "";
        } else {
            word += input[i];
        }
    }
    words.push_back(word);
    
    for (int i = 0; i < words.size(); ++i) {
        if (i != 0) {
            words[i][0] = toupper(words[i][0]);
        }
        cout << words[i];
    }
    
    return 0;
}