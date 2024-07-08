#include <string>
#include <vector>

using namespace std;

vector<string> splitString(string input) {
    vector<string> words;
    string word = "";
    for(char c: input) {
        if(c == ' ') {
            if(!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()) {
        words.push_back(word);
    }
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

int main() {
    string words_string = "ahmed     , gamal"; 
    assert (issame(splitString(words_string), vector<string>({"ahmed", "gamal"}))); 
    return 0;
}