#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool issame(const vector<string>& a) {
    return (a.size() == 1 && a[0] == "0");
}

vector<string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

    for (char c : txt) {
        if (!isalpha(c)) { 
            if (inWord) {
                result.push_back(word);
                word = "";
                inWord = false;
            }
        } else {
            word += tolower(c); // Convert all characters to lowercase
            inWord = true;
        }
    }

    if (inWord) {
        result.push_back(word);
    }
    return result;
}