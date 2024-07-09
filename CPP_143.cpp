```cpp
#include <iostream>
#include <sstream>

using namespace std;

void words_in_sentence(string sentence);

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    istringstream ss(sentence);
    words_in_sentence(ss);
    cout << endl;
    return 0;
}

void words_in_sentence(istringstream ss) {
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