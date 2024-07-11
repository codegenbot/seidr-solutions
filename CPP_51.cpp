```cpp
#include <string>
#include <iostream>

using namespace std;

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            result += c;
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