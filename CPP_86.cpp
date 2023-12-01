#include <iostream>
#include <algorithm> // for sort
#include <string>

using namespace std;

string anti_shuffle(string s){
    string result = "";
    string word = "";
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            sort(word.begin(), word.end());
            result += word + " ";
            word = "";
        }
        else{
            word += s[i];
        }
    }
    
    sort(word.begin(), word.end());
    result += word;
    
    return result;
}

int main(){
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    
    return 0;
}