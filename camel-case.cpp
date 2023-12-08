#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    // Split the input into words using "-" as delimiter
    vector<string> words = split(input, '-');
    
    // Convert each word to camelCase
    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        
        // If the word is not empty, convert it to camelCase
        if (!word.empty()) {
            char firstChar = word[0];
            
            // Convert the first character of the word to uppercase
            word[0] = toupper(firstChar);
            
            // Append the rest of the word in lowercase
            word += tolower(word.substr(1));
        }
        
        // Add the converted word to the output string
        input += word;
    }
    
    cout << input << endl;
    
    return 0;
}