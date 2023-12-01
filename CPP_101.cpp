#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b);

int main() {
    // Test the words_string function
    string input = "Hello, world! This is a test";
    vector<string> words = words_string(input);
    assert(words.size() == 6);
    assert(words[0] == "Hello");
    assert(words[1] == "world!");
    assert(words[2] == "This");
    assert(words[3] == "is");
    assert(words[4] == "a");
    assert(words[5] == "test");

    // Test the issame function
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"apple", "banana", "cherry"};
    assert(issame(a, b));

    vector<string> c = {"apple", "banana", "cherry"};
    vector<string> d = {"apple", "grape", "cherry"};
    assert(!issame(c, d));

    cout << "All tests passed!" << endl;

    return 0;
}

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ',' || s[i] == ' '){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(!word.empty()){
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