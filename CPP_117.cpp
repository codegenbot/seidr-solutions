#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

vector<string> select_words(string s, int n);

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ') {
            int consonant_count = count_if(word.begin(), word.end(), [](char c) { return !strchr("aeiouAEIOU", c) && isalpha(c); });
            if (consonant_count == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += c;
        }
    }
    int consonant_count = count_if(word.begin(), word.end(), [](char c) { return !strchr("aeiouAEIOU", c) && isalpha(c); });
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    return result;
}