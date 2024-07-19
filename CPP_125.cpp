#include <vector>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

vector<string> split_words(string txt);

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    // Add additional test cases here
    return 0;
}