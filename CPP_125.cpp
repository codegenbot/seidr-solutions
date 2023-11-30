#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt);

bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(split_words(""), {"0"}));
    // Add more test cases here
    return 0;
}

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    int count = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else if (txt[i] == ',') {
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
            if (txt[i] >= 'a' && txt[i] <= 'z') {
                count++;
            }
        }
    }
    if (word != "") {
        result.push_back(word);
    }
    if (result.size() == 0) {
        result.push_back(to_string(count));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a = b;
}