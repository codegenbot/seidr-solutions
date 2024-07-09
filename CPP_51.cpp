string remove_vowels(string text){
    string result = "";
    for(int i=0; i < text.length(); i++){
        if(toupper(text[i]) != 'A' && toupper(text[i]) != 'E' && toupper(text[i]) != 'I' && toupper(text[i]) != 'O' && toupper(text[i]) != 'U'){
            result += text[i];
        }
    }
    return result;
}