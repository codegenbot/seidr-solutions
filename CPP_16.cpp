vector<char> distinct_chars;
    for(auto ch : str){
        if(isalpha(ch)){
            if(find(distinct_chars.begin(), distinct_chars.end(), tolower(ch)) == distinct_chars.end()){
                distinct_chars.push_back(tolower(ch));
            }
        }
    }
    return distinct_chars.size();
}