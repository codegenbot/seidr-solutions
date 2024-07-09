string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(toupper(c) != 'A' && toupper(c) != 'E' && toupper(c) != 'I' 
           && toupper(c) != 'O' && toupper(c) != 'U' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' 
           && tolower(c) != 'o' && tolower(c) != 'u'){
            result += c; 
        }
    }
    return result;
}