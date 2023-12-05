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
        
        if (word.length() > 1) {
            word[0] = toupper(word[0]);
        }
        
        cout << word << " ";
    }
    
    return 0;
}