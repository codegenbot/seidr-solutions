string result;
    int max_unique_chars = 0;
    
    for (const auto& word : words) {
        int unique_chars = distance(word.begin(), unique(word.begin(), word.end()));
        if (unique_chars > max_unique_chars || 
            (unique_chars == max_unique_chars && word < result)) {
            result = word;
            max_unique_chars = unique_chars;
        }
    }
    
    return result;
}