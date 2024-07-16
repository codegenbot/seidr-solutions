std::string encode(const std::string &message) {
    std::string result = message;
    for(char &c : result){
        if(isalpha(c)){
            c = isupper(c) ? tolower(c) : toupper(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return result;
}