string ordered_string = "";
    string word = "";
    
    for (char& c : s) {
        if (isalpha(c)) {
            word += c;
        } else {
            sort(word.begin(), word.end());
            ordered_string += word + c;
            word = "";
        }
    }
    
    if (!word.empty()) {
        sort(word.begin(), word.end());
        ordered_string += word;
    }
    
    return ordered_string;
}