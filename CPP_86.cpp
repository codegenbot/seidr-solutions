string ordered_word = s;
    string ordered_sentence = "";
    
    int start = 0;
    for (int i = 0; i <= s.size(); ++i) {
        if (s[i] == ' ' || i == s.size()) {
            string current_word = s.substr(start, i - start);
            sort(current_word.begin(), current_word.end());
            ordered_sentence += current_word + ' ';
            start = i + 1;
        }
    }
    
    return ordered_sentence;
}