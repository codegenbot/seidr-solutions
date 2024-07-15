vector<char> chars;
    for(char c : str){
        chars.push_back(tolower(c));
    }
    sort(chars.begin(), chars.end());
    chars.erase(unique(chars.begin(), chars.end()), chars.end());
    return chars.size();
}