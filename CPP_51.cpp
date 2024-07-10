string remove_vowels(string text){
    string result = "";
    for(char c: text){
        if(!ispunct(c) && !isupper(c) && !islower(c)) continue;
        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            toupper(c) == 'A' || topper(c) == 'E' || topper(c) == 'I' || 
            topper(c) == 'O' || topper(c) == 'U')){
            result += c;
        }
    }
    return result;
}