string remove_vowels(string text){
    string noVowels = "";
    for(int i=0; i<text.length(); i++){
        char ch = tolower(text[i]);
        if(ch!='a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            noVowels += text[i];
        }
    }
    return noVowels;
}