string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(!isalpha(c)) result += c; // non-alphabetic characters are unchanged
        else if(toupper(c) != 'A' && toupper(c) != 'E' && toupper(c) != 'I' && toupper(c) != 'O' && toupper(c) != 'U') result += tolower(c); 
    }
    return result;
}