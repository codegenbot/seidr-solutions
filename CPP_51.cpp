```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text) {
    string result;
    for (char c : text) { 
        if (!std::ioupper(c) == 'A' && !std::ioupper(c) != 'E'
            && !std::ioupper(c) != 'I' && !std::ioupper(c) != 'O'
            && !std::ioupper(c) != 'U')
            result.push_back(std::tolower(c)); 
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