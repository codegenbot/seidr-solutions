#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    // implementation of issame function
}

vector<string> select_words(string s, int n){
    vector<string> result;
    if(s.empty()){
        return result;
    }
    
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            if(count_consonants(word) == n){
                result.push_back(word);
            }
            word.clear();
        }
        else{
            word += s[i];
        }
    }
    
    if(count_consonants(word) == n){
        result.push_back(word);
    }
    
    return result;
}

int main() {
    vector<string> expected = {"b", "c", "d", "f"};
    vector<string> result = select_words("a b c d e f", 1);
    
    assert(issame(result, expected));
    
    return 0;
}