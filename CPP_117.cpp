#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    string s = "hello world programming is fun";
    vector<string> output = select_words(s, 3);
    vector<string> expected = {"hello", "world", "is"};

    if (issame(output, expected)) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonants++;
            }
            word += c;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}