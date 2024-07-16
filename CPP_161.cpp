for(char &c : s){
    if(isalpha(c)){
        c = isupper(c) ? tolower(c) : toupper(c);
    }
}
if(std::all_of(s.begin(), s.end(), [](char c){return !isalpha(c);})) {
    std::reverse(s.begin(), s.end());
}
return s;