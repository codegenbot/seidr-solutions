#include <string>
#include <vector>
#include <algorithm>

using namespace std;

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
        result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c){return islower(c) && (c-'a') % 2 == 1;})));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}