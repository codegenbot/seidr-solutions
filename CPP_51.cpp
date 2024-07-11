```cpp
#include <string>
#include <iostream>

using namespace std;

string remove_vowels(string text){
    string result = "";
    for(size_t i = 0; i < text.length(); i++){
        char c = isalpha(text[i]) ? tolower(text[i]) : text[i];
        if(c >= 'a' && c <= 'z'){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                result += text[i];
            }
        }
    }
    return result;
}

int main(){
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string output = remove_vowels(text);
    cout << "Sentence without vowels: " << output << endl;
    return 0;
}