```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text){
    string result;
    for(auto c : text) {
        if(std::tolower(c) != 'a' && std::tolower(c) != 'e' && 
           std::tolower(c) != 'i' && std::tolower(c) != 'o' && 
           std::tolower(c) != 'u') 
            result.push_back(c); // Add this character to the result
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    cout << "Sentence with vowels removed: " << remove_vowels(text) << endl;
    return 0;
}