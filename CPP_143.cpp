```cpp
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void splitSentence(string sentence);

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    splitSentence(sentence);
    cout << endl;
    return 0;
}

void splitSentence(string sentence) {
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