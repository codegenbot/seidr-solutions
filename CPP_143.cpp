string words_in_sentence(string sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;

    while (getline(ss, word, ' ')) {
        if (count > 0) {
            cout << ", ";
        }
        cout << word;
        count++;
    }
    return count > 0 ? "The output is: " + word : "";
}