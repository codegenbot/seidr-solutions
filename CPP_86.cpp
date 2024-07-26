string ordered_word = "";
    string ordered_sentence = "";
    string word = "";

    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            ordered_sentence += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }

    sort(word.begin(), word.end());
    ordered_sentence += word;

    return ordered_sentence;
}