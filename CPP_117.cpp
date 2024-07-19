#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool are_same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        words.push_back(word);
        if (words.size() == n) {
            break;
        }
    }
    return words;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(are_same(result, {"world", "contest"}));

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}