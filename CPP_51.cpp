Here is the completed code:

string remove_vowels(string text){
    string result = "";
    for(char c : text) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           (c >= 'A' && c <= 'U') && (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'))
            continue;
        result += c;
    }
    return result;