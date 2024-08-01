#include <iostream>
using namespace std;

bool ispunct(char c) {
    static char punctuations[] = {'.', ',', '?', '!', ';', ':'};
    for (int i = 0; i < sizeof(punctuations)/sizeof(punctuations[0]); i++) {
        if (c == punctuations[i]) return true;
    }
    return false;
}

string findPunctuation(string word) {
    int j = word.length() - 1;
    for (int i = 0; i <= j; i++) {
        if (ispunct(word[i])) return word[i];
        if (ispunct(word[j])) return word[j];
    }
    return "";
}

int main() {
    string word;
    cout << "Enter a sentence: ";
    getline(cin, word);
    cout << "The punctuation character is: " << findPunctuation(word) << endl;
    return 0;
}