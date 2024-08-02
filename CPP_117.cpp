#include <vector>
#include <algorithm>
#include <string>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n); 

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    s += ' '; 

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c) && std::find_if(s.begin(), s.end(), [c](char v) { return c == v; }) == s.end()) {
            consonant_count++;
        }
        word += c;
    }

    return result;
}