void words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    bool isWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            if (!isWord) {
                continue; // skip multiple spaces
            }
            isWord = false;
        } else {
            if (!isWord) {
                word += c;
                isWord = true;
            } else {
                word += c;
            }
        }
    }

    words.push_back(word);
    cout << "The words in the sentence are: ";
    for (string w : words) {
        cout << w << endl;
    }
}