```cpp
#include <iostream>
#include <sstream>
#include <cassert>
using namespace std;

string words_in_sentence(string sentence) {
    istringstream ss(sentence);
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
    string input;
    getline(cin, input);
    cout << words_in_sentence(input) << endl;
    return 0;
}