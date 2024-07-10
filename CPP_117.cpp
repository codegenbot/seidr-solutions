#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    // Implementation of the issame function
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                count++;
            }
            word += c;
        }
    }

    if (count == n) {
        result.push_back(word);
    }

    return result;
}