```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text) {
    string result;
    for (int i = 0; i < text.length(); i++) {
        char c = tolower(text[i]);
        if (c != 'a' && c != 'e'
            && c != 'i' && c != 'o'
            && c != 'u')
            result.push_back(c); 
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string result = "";
    for (char c : text) {
        char lowerC = tolower(c);
        if (lowerC != 'a' && lowerC != 'e'
            && lowerC != 'i' && lowerC != 'o'
            && lowerC != 'u')
            result += c; 
    }
    cout << "Sentence with vowels removed: " << result << endl;
    return 0;
}