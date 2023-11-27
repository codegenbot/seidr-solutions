#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (char c : txt) {
        if (c == ' ') {
            hasWhitespace = true;
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            hasComma = true;
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    if (words.size() == 0) {
        words.push_back("0");
    }

    return words;
}