#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

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

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> words = words_string("Hello, World!");
    vector<string> expected = {"Hello", "World!"};
    assert(issame(words, expected));

    words = words_string("This is a test");
    expected = {"This", "is", "a", "test"};
    assert(issame(words, expected));

    words = words_string("One,Two,Three,Four,Five");
    expected = {"One", "Two", "Three", "Four", "Five"};
    assert(issame(words, expected));

    return 0;
}