#include <string>

string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(!isvowel(text[i]))
            result += text[i];
    }
    return result;
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}