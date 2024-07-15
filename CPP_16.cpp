vector<char> unique_chars;
    for(char c : str){
        if(find(unique_chars.begin(), unique_chars.end(), tolower(c)) == unique_chars.end()){
            unique_chars.push_back(tolower(c));
        }
    }
    return unique_chars.size();
}