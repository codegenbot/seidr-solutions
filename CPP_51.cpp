string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(!((text[i]-'a'>=0 && text[i]-'a'<5) || (text[i]-'A'>=0 && text[i]-'A'<5))){
            result += text[i];
        }
    }
    return result;
}