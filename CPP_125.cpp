#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' ' || c == ','){
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
    if(result.empty() && !hasWhitespace){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}