vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    int count_odd_lower_case = 0;
    
    for (char c : txt) {
        if (isalpha(c)) {
            if (islower(c)) {
                int pos = c - 'a';
                if (pos % 2 != 0) {
                    count_odd_lower_case++;
                }
            }
            word += c;
        } else if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (result.empty()) {
        result.push_back(to_string(count_odd_lower_case));
    }
    
    return result;
}