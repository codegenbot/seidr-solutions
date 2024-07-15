#include <vector>
#include <iostream>
#include <cassert> 

using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b){
    return a == b;
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

int main2() {
    string s = "hello world programming is fun";
    vector<string> output = select_words(s, 3);
    vector<string> expected = {"hello", "world", "is"};

    assert(issame(output, expected));

    // Additional test cases
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));

    cout << "All tests passed" << endl;

    return 0;
}