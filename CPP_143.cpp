```
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void wordsInSentence(string sentence);

int main() {
    string inputSentence;
    cout << "Enter a sentence: ";
    getline(cin, inputSentence);
    
    wordsInSentence(inputSentence);
    return 0;
}

void wordsInSentence(string sentence) {
    vector<string> words;
    string word;
    bool isWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            if (!isWord) {
                continue; // skip multiple spaces
            }
            isWord = false;
        } else {
            if (!isWord) {
                word += c;
                isWord = true;
            } else {
                word += c;
            }
        }
    }

    if (isWord) {
        cout << word;
    } else {
        cout << sentence; // handle case when input only contains spaces
    }
}