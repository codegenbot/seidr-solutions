#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <sstream>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<string> split_words(const string& txt) {
    vector<string> words;
    istringstream iss(txt);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(split_words(""), {}));
    return 0;
}