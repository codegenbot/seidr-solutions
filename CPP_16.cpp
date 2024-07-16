int count_distinct_characters(string str){
    vector<char> unique_chars;
    for(char c : str){
        char lower_c = tolower(c);
        if(find(unique_chars.begin(), unique_chars.end(), lower_c) == unique_chars.end()){
            unique_chars.push_back(lower_c);
        }
    }
    return unique_chars.size();
}