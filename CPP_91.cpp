int is_bored(string S) {
    int boredoms = 0;
    string word;
    for (char c : S + ".") {
        if (c == '.' || c == '?' || c == '!') {
            if (!word.empty() && word[0] == 'I')
                boredoms++;
            word.clear();
        } else if (c == ' ') {
            if (!word.empty() && word[0] == 'I') {
                boredoms++;
                break;
            }
            word += c;
        } else {
            word += c;
        }
    }
    return boredoms;
}