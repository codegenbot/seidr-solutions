int count = 0;
    string sentence = "";
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.size() > 2 && sentence[0] == 'I' && sentence[1] == ' ') {
                count++;
            }
            sentence = "";
        } else {
            sentence += c;
        }
    }
    return count;
}