#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt); // Function prototype

bool issame(vector<string> a, vector<string> b); // Function prototype

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
        } else if (txt[i] == ',') {
            hasComma = true;
        } else {
            word += txt[i];
        }

        if ((hasWhitespace && txt[i] == ' ') || (hasComma && txt[i] == ',')) {
            result.push_back(word);
            word = "";
        }
    }

    if (word != "") {
        result.push_back(word);
    }

    if (result.empty()) {
        result.push_back(to_string(3));
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
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
    // Test cases
    vector<string> emptyResult = split_words("");
    assert(issame(emptyResult, {"0"}));

    vector<string> result = split_words("hello,world");
    assert(issame(result, {"hello", "world"}));

    cout << "All test cases pass." << endl;

    return 0;
}