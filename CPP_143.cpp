```cpp
#include <iostream>
#include <sstream>

using namespace std;

void words_in_sentence(const string& sentence);

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    words_in_sentence(sentence);
    cout << endl;
    return 0;
}

void words_in_sentence(const string& sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;

    while (getline(ss, word, ' ')) {
        if (count > 0) {
            cout << ", ";
        }
        cout << word;
        count++;
    }
}