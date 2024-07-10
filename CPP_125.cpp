#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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
    if(result.empty()){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && ((c - 'a') % 2 == 1)){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    using namespace std;
    vector<string> input1 = split_words("hello, world");
    vector<string> input2 = split_words("cpp contest");
    
    assert(issame(input1, vector<string>{"hello", "world"}));
    assert(issame(input2, vector<string>{"cpp", "contest"}));
    
    return 0;
}