#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else if(c == ','){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    if(word != ""){
        result.push_back(word);
    }
    if(result.size() == 0 && !hasWhitespace){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c-'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    // Add additional test cases here if needed
    return 0;
}