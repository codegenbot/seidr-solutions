int count_distinct_characters(string str){ 
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> distinct_chars;
    for(char ch : str){
        if(find(distinct_chars.begin(), distinct_chars.end(), ch) == distinct_chars.end()){
            distinct_chars.push_back(ch);
        }
    }
    return distinct_chars.size();
}