int count_distinct_characters(string str){
    vector<char> unique_chars;
    for(char c : str){
        if(find_if(unique_chars.begin(), unique_chars.end(), tolower) == unique_chars.end())
            unique_chars.push_back(tolower(c));
    }
    return unique_chars.size();
}