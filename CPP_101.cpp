#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    return (a==b);
}

vector<string> words_string(string s){
    vector<string> result;
    string word = "";
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
    assert (issame(words_string("ahmed     , gamal") , vector<string>{{"ahmed"}, {"gamal"}}));
    return 0;
}