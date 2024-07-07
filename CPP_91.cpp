int is_bored(string S) {
    int count = 0;
    string word;
    for (char c : S + ".") {
        if (c == '.') {
            word.clear();
        } else if (c == ' ') {
            if (!word.empty() && word[0] == 'I') {
                count++;
            }
            word += c;
        } else {
            word += c;
        }
    }
    return count;
}