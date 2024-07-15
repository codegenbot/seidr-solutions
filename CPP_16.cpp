int count = 0;
    vector<char> distinct_chars;
    
    for(char c : str){
        if(find(distinct_chars.begin(), distinct_chars.end(), tolower(c)) == distinct_chars.end() && 
           find(distinct_chars.begin(), distinct_chars.end(), toupper(c)) == distinct_chars.end()){
            distinct_chars.push_back(tolower(c));
            count++;
        }
    }
    
    return count;
}