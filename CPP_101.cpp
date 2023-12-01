#include <vector>
#include <string>
#include <cassert>

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test the words_string function
    vector<string> words = words_string("Hello, World! This is a test.");
    assert(words.size() == 6);
    assert(words[0] == "Hello");
    assert(words[1] == "World!");
    assert(words[2] == "This");
    assert(words[3] == "is");
    assert(words[4] == "a");
    assert(words[5] == "test.");

    // Test the issame function
    vector<string> a = {"apple", "banana", "orange"};
    vector<string> b = {"apple", "banana", "orange"};
    assert(issame(a, b));

    vector<string> c = {"apple", "banana", "orange"};
    vector<string> d = {"apple", "grape", "orange"};
    assert(!issame(c, d));

    return 0;
}