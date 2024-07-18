string ordered = "";
    string word = "";
    for(char c : s) {
        if(c != ' ') {
            word += c;
        } else {
            sort(word.begin(), word.end());
            ordered += word + " ";
            word = "";
        }
    }
    if(!word.empty()) {
        sort(word.begin(), word.end());
        ordered += word;
    }
    return ordered;
}