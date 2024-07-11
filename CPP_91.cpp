int is_bored(string S) {
    int count = 0;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            string sentence = S.substr(0, S.find(c));
            if (!sentence.empty() && sentence[0] == 'I' && sentence[1] == ' ') {
                count++;
            }
            S = S.substr(S.find(c) + 1);
        }
    }
    return count;