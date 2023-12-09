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
            word[0] = toupper(word[0]);
            for (int j = 1; j < word.size(); j++) {
                if (isupper(word[j])) {
                    word[j] = tolower(word[j]);
                }
            }
        }
        
        // Add the converted word to the output string
        input += word + " ";
    }
    
    cout << input << endl;
    
    return 0;
}