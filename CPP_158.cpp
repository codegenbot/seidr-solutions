string result;
    int max_unique = 0;
    int max_lex_order = 0;
    
    for (const string& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        
        if (unique_chars > max_unique || (unique_chars == max_unique && word < words[max_lex_order])) {
            max_unique = unique_chars;
            result = word;
            max_lex_order = distance(words.begin(), find(words.begin(), words.end(), word));
        }
    }
    
    return result;
}