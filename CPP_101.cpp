#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

int main(){
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
    cout << "Test case passed!" << endl;
    return 0;
}