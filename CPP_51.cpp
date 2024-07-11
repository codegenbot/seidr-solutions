```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text) {
    string result;
    for (int i = 0; i < text.length(); i++) {
        if (std::tolower(text[i]) != 'a' && std::tolower(text[i]) != 'e'
            && std::tolower(text[i]) != 'i' && std::tolower(text[i]) != 'o'
            && std::tolower(text[i]) != 'u')
            result.push_back(text[i]); 
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string result = remove_vowels(text); 
    cout << "Sentence with vowels removed: " << result << endl;
    return 0;
}