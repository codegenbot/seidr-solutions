#include <string>

string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length();i++){
        if(!("aeiouAEIOU").find(text[i]))
            result += text[i];
    }
    return result;
}