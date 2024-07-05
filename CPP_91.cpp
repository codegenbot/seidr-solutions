#include <iostream>
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    bool newSentence = true;

    for (char c : S) {
        if (newSentence && c == 'I') {
            count++;
            newSentence = false;
        }
        if (c == '.' || c == '?' || c == '!') {
            newSentence = true;
        }
        if (c != ' ' && c != '.' && c != '?' && c != '!') {
            newSentence = false;
        }
    }

    return count;
}

int main() {
    string input;
    getline(cin, input);
    cout << is_bored(input) << endl;
    return 0;
}