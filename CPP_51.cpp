#include <string>
#include <iostream>
#include <cctype>

int main() {
    using namespace std;
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    cout << "Sentence without vowels: " << remove_vowels(text) << endl;
}

string remove_vowels(string text){
    string result;
    for(auto c : text) {
        if(c >= 'a' && c <= 'z'){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                result += (char) c; 
            }
        } else {
            result += c; 
        }
    }
    return result;
}