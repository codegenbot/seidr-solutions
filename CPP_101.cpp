#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s);
bool issame(vector<string> a, vector<string> b);

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        size_t pos = word.find(',');
        if (pos != string::npos) {
            word.erase(pos, 1);
        }
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    
    return 0;
}