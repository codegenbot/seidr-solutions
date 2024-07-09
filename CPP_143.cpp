```cpp
#include <iostream>
#include <sstream>

using namespace std;

string words_in_sentence(string sentence) {
    istringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word) {
        if (count > 0) {
            cout << ", ";
        }
        cout << word;
        count++;
    }

    return "";
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    words_in_sentence(sentence);
    cout << endl;

    return 0;
}