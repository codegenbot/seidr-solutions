int count_distinct_characters(string str){ 
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> distinct_chars;
    for(char c : str){
        if(find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()){
            distinct_chars.push_back(c);
        }
    }
    return distinct_chars.size();
}