#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += c;
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.empty()){
        result.push_back("3");
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    string txt;
    getline(cin, txt);
    
    vector<string> words = split_words(txt);
    vector<string> target = {"hello", "world", "cpp"};
    
    bool same = issame(words, target);
    
    if(same){
        cout << "Same words" << endl;
    }
    else{
        cout << "Different words" << endl;
    }
    
    return 0;
}