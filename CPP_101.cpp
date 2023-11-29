#include <iostream>
#include <vector>
#include <string>
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
        } else {
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b){
    // Compare a and b here and return true or false
    // Based on the comparison result.
}

int main(){
    vector<string> words = words_string("ahmed     , gamal");
    vector<string> expected = {"ahmed", "gamal"};
    
    bool result = issame(words, expected);
    
    if(result){
        cout << "The two vectors are the same" << endl;
    } else {
        cout << "The two vectors are different" << endl;
    }
    
    return 0;
}