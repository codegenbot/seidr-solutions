#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string anti_shuffle(string s);

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}

string anti_shuffle(string s){
    string result = "";
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}