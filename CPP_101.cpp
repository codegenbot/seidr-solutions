#include <vector>
#include <string>
#include <cassert>
#include <sstream>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> words_string(const string& s) {
    istringstream iss(s);
    vector<string> words;
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}