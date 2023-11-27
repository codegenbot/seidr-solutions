#include <vector>
#include <string>
#include <iostream> 

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (txt[i] == ',') {
            hasComma = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }

    if (!hasWhitespace && !hasComma) {
        result.push_back(to_string(3));
    }

    return result;
}

bool isSameVectors(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);

    vector<string> words1 = split_words(input1);
    vector<string> words2 = split_words(input2);

    bool result = isSameVectors(words1, words2);

    cout << (result ? "Same" : "Different") << endl;

    return 0;
}