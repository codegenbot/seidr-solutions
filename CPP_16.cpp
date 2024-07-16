vector<char> distinct_chars;
    int count = 0;
    
    for(char& c : str) {
        char lower_c = tolower(c);
        if(find(distinct_chars.begin(), distinct_chars.end(), lower_c) == distinct_chars.end()) {
            distinct_chars.push_back(lower_c);
            count++;
        }
    }
    
    return count;
}