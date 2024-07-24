string remove_vowels(string text){
    string result = "";
    for(char ch : text){
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){
            result += ch;
        }
    }
    return result;
}