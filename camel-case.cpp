#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    vector<string> words = split(input, '-');
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        string word = words[i];
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout << word;
    }
    
    return 0;
}