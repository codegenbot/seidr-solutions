#include <iostream>
#include <string>
using namespace std;

int is_bored(const string& S) {
    int count = 0;
    bool newSentence = true;

    for (char c : S) {
        if (newSentence && c == 'I') {
            count++;
            newSentence = false;
        } else if (c == '.' || c == '?' || c == '!') {
            newSentence = true;
        } else if (c != ' ' && c != '.' && c != '?' && c != '!') {
            newSentence = false;
        }
    }

    return count;
}

int main() {
    string S;
    getline(cin, S);
    cout << is_bored(S) << endl;
    return 0;
}