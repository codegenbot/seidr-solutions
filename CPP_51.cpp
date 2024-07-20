string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        char c = tolower(text[i]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
            result += text[i];
        }
    }
    return result;
}