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
    // Testing the words_string function
    string input = "Hello, World! This is a test.";
    vector<string> result = words_string(input);
    assert(result.size() == 6);
    assert(result[0] == "Hello");
    assert(result[1] == "World!");
    assert(result[2] == "This");
    assert(result[3] == "is");
    assert(result[4] == "a");
    assert(result[5] == "test.");

    // Testing the issame function
    vector<string> a = {"Hello", "World!"};
    vector<string> b = {"Hello", "World!"};
    assert(issame(a, b));

    vector<string> c = {"Hello", "World!"};
    vector<string> d = {"Hello", "World", "!"};
    assert(!issame(c, d));

    vector<string> e = {"Hello", "World!"};
    vector<string> f = {"Hello", "world!"};
    assert(!issame(e, f));

    return 0;
}