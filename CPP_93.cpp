for(char& c : message){
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                c = toupper((char)(c + 2));
            }
            else{
                c = isupper(c) ? tolower(c) : toupper(c);
            }
        }
    }
    return message;
}