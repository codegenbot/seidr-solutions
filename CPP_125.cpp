#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(char a, char b) {
    return tolower(a) == tolower(b);
}

vector<string> split_words(string txt);

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.size() == 0){
        result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c){return islower(c) && (c-'a') % 2 == 1;})));
    }
    return result;
}

int main() {
    assert(issame('a', 'a'));
    string input;
    getline(cin, input);
    vector<string> words = split_words(input);
    for(string word : words) {
        cout << word << endl;
    }
    return 0;
}