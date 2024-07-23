string result = "";
    size_t start = 0;
    for(size_t i = 0; i <= s.size(); ++i){
        if(s[i] == ' ' || i == s.size()){
            string word = s.substr(start, i-start);
            sort(word.begin(), word.end());
            result += word + " ";
            start = i+1;
        }
    }
    return result;
}