```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

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

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string output = remove_vowels(text);
    cout << "Sentence without vowels: " << output << endl;
}