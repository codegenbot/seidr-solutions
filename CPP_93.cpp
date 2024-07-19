string encode(string message){
    for(auto &c : message){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'z' || c == 'Z'){
                c -= 24;
            } else if(strchr("aeiouAEIOU", c) != nullptr){
                c += 2;
            } else {
                c += 1;
            }
        }
    }
    return message;
}