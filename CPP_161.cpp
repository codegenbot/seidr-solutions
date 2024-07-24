for(char &c : s){
        if(isalpha(c)){
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    
    size_t n = s.size();
    if(n == 0){
        reverse(s.begin(), s.end());
    }

    return s;
}