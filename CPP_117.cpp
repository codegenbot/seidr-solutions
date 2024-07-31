#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> select_words(string sentence, int start_index) {
    vector<string> words;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        if (start_index > 0) {
            start_index--;
            continue;
        }
        words.push_back(word);
    }

    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "e", "f"}));
    
    return 0;
}