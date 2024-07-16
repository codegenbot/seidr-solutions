for(auto &c : s){
    if(isalpha(c)){
        c = isupper(c) ? tolower(c) : toupper(c);
    }
}
if(all_of(s.begin(), s.end(), [](char c){ return !isalpha(c); })){
    reverse(s.begin(), s.end());
}
return s;