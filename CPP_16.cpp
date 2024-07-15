vector<char> chars;
    for(char c : str){
        char lc = tolower(c);
        if(find(chars.begin(), chars.end(), lc) == chars.end()){
            chars.push_back(lc);
        }
    }
    return chars.size();
}