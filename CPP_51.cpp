#include <iostream>
#include <string>
using namespace std;

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' 
           && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
            result += c;
        }
    }
    return result;

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string res = remove_vowels(text);
    cout << "Sentence without vowels: " << res << endl;
    return 0;
}