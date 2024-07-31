string encode(string message){
    for (char &c : message){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
            if(c > 'Z') c = c - 26; // to wrap around if letter is beyond Z
        }
    }
    return message;
}