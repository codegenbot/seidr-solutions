```
#include <iostream>
#include <sstream>
using namespace std;

string words_in_sentence(string sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;
    while (getline(ss, word, ' ')) {
        if (count == 1)
            return word;
        ++count;
    }
    return "";
}

int main() {
    assert(words_in_sentence("here is") == "is");
    cout << words_in_sentence("Hello world") << endl;
    return 0;
}