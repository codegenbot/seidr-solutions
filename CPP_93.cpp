string encode(string message){
    string vowels = "aeiouAEIOU";
    string replacements = "cgkqwCGKQW";
    for(char &c : message){
        if(isalpha(c)){
            if(vowels.find(c) != string::npos){
                c = replacements[vowels.find(c)];
            }
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    return message;
}