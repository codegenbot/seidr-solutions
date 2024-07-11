int count_distinct_characters(string str){ 
    vector<char> chars;
    for(char c : str){
        if(isalpha(c)){
            char lowercase_c = tolower(c);
            if(find(chars.begin(), chars.end(), lowercase_c) == chars.end()){
                chars.push_back(lowercase_c);
            }
        }
    }
    return chars.size();
}