#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt);
bool issame(vector<string> a, vector<string> b);

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
    if(result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos){
        int oddCount = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result[0] = to_string(oddCount);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    // Test the split_words function
    assert (issame(split_words("") ,{"0"}));

    return 0;
}