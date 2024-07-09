```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> words_string(string s){
    vector<string> result;
    std::string word = "";  // Corrected type from 'string' to 'std::string'
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }else{
            word += s[i];
        }
    }
    if(!word.empty())
        result.push_back(word);
    return result;
}

int main(){
    assert (issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
    return 0;
}