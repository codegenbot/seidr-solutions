string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(toupper(c) != 'A' && toupper(c) != 'E' && toupper(c) != 'I' && toupper(c) != 'O') {
            result += c;
        }
    }
    return result;
}