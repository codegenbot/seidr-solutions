#include <vector>
#include <string>
#include <cctype>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

    for (char c : txt) {
        if (!inWord && !isalnum(c)) {
            // Check for commas
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !isalnum(c)) {
            result.push_back(word);
            word = "";
            inWord = false;
        } else {
            word += c;
        }
    }

    if (inWord) {
        result.push_back(word);
    } else if (txt.length() == 0) {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}