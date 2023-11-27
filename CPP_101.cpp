#include <vector>
#include <string>
using namespace std;

vector<string> words_strings(string s) {
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

bool issame(vector<string> a, vector<string> b) {
    // Implementation
}

int main() {
    assert(issame(words_strings("ahmed     , gamal"), {"ahmed", "gamal"}));
    
    return 0;
}