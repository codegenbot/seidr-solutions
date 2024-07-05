#include <sstream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        stringstream ws(word);
        string subword;
        while (getline(ws, subword, ',')) {
            if (!subword.empty()) {
                result.push_back(subword);
            }
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
    return 0;
}