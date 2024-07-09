#include <string>
#include <iostream>

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(!strchr("aeiouAEIOU", c)){
            result += c;
        }
    }
    return result;
}

int main(){
    assert (remove_vowels("ybcd") == "ybcd");
    return 0;
}