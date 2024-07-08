```cpp
#include <cassert>
#include <string>
#include <vector>

using namespace std;

vector<string> words_string(string str) {
    vector<string> words;
    string word;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += str[i];
        }
    }
    words.push_back(word);
    return words;
}

bool issame(vector<string> a, vector<string> b) { 
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), vector<string>{ "ahmed", "gamal" }));
    return 0;
}