string solve(string s){
    for(char &c : s){
        if(isalpha(c)){
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    if(count_if(s.begin(), s.end(), isalpha) == 0){
        reverse(s.begin(), s.end());
    }
    return s;
}