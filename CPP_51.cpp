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
    cin >> text;
    if(text.empty()) {
        cout << "Error: Input cannot be empty." << endl;
    } else {
        std::cout << "Sentence without vowels: " << remove_vowels(text) << std::endl;
    }
}