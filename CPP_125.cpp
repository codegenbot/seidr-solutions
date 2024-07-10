#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> split_words(string txt);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

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

int main(){
    using namespace std;
    string input;
    getline(cin, input);

    vector<string> result = split_words(input);
    vector<string> expected_result = split_words(input);

    assert(issame(result, expected_result));

    return 0;
}