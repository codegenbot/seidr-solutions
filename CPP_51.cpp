string remove_vowels(string text){
    string result = "";
    string vowels = "aeiouAEIOU";
    for(int i=0; i<text.length(); i++){
        if(vowels.find(text[i]) == string::npos){
            result += text[i];
        }
    }
    return result;
}