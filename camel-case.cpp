int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;
    bool first = true;
    while (getline(ss, word, ' ')) {
        stringstream ss_word(word);
        string subword;
        bool first_subword = true;
        while (getline(ss_word, subword, '-')) {
            if (!first && !first_subword) {
                subword[0] = toupper(subword[0]);
            }
            cout << subword;
            first_subword = false;
        }
        first = false;
        cout << " ";
    }

    return 0;
}