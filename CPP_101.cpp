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

// int main(){
//     vector<string> result = words_string("ahmed     , gamal");
//     vector<string> expected = {"ahmed", "gamal"};
//     if(result == expected){
//         cout << "Test case passed!" << endl;
//     }
//     else{
//         cout << "Test case failed!" << endl;
//     }
// }