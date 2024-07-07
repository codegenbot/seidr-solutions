#include <string>

string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(!isvowel(text[i]))
            result += text[i];
    }
    return result;
}

bool isvowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}