#include <vector>
#include <string>
#include <cassert>

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

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

int main() {
    // Test the words_string function
    vector<string> result = words_string("Hello, World!");
    assert(result.size() == 2);
    assert(result[0] == "Hello");
    assert(result[1] == "World!");

    result = words_string("This is a sentence");
    assert(result.size() == 4);
    assert(result[0] == "This");
    assert(result[1] == "is");
    assert(result[2] == "a");
    assert(result[3] == "sentence");

    // Test the issame function
    vector<string> a = {"apple", "banana", "orange"};
    vector<string> b = {"apple", "banana", "orange"};
    assert(issame(a, b));

    a = {"apple", "banana", "orange"};
    b = {"apple", "banana", "grape"};
    assert(!issame(a, b));

    a = {"apple", "banana", "orange"};
    b = {"apple", "banana"};
    assert(!issame(a, b));

    return 0;
}