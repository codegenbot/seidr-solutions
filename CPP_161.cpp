for(char &c : s){
    if(isalpha(c)){
        if(islower(c)){
            c = toupper(c);
        } else {
            c = tolower(c);
        }
    }
}
if(all_of(s.begin(), s.end(), [](unsigned char c){ return !isalpha(c); })){
    reverse(s.begin(), s.end());
}
return s;