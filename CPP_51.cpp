#include <iostream>
#include <string>
#include <cassert> // Include the necessary header file

using namespace std;

string remove_vowels(string text); // Function declaration

int main(){
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}

string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' && text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U'){
            result += text[i];
        }
    }
    return result;
}