```cpp
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> splitString(string str) {
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

bool issame(vector<string> a, vector<string> b, vector<string> c) { 
    if(a.size() != b.size() || b.size() != c.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i] || b[i] != c[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(splitString("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}