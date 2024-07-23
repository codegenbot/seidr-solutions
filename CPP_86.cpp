string ordered_word;
    string result = "";
    int start = 0;
    for(int i=0; i<=s.length(); i++){
        if(s[i] == ' ' || i == s.length()){
            ordered_word = s.substr(start, i - start);
            sort(ordered_word.begin(), ordered_word.end());
            result += ordered_word + ' ';
            start = i + 1;
        }
    }
    return result;
}