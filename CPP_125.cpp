```
#include <vector>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a) {
    return (a.size() == 1 && a[0] == "0");
}

vector<string> split_words(string txt) {
    vector<string> result;
    bool inWord = false;
    string word = "";

    for (char c : txt) {
        if (!inWord && !isalpha(c)) { 
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !isalpha(c)) { 
            result.push_back(word);
            word = "";
            inWord = false;
        } else {
            word += c;
        }
    }

    if (inWord) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(split_words("")) == true);
    string input;
    cout << "Enter your text: ";
    cin >> input;
    vector<string> words = split_words(input);
    for(string word : words) {
        cout << word << endl;
    }
}