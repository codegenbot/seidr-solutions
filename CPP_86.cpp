#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

string anti_shuffle(string s){
    string result = "";
    string word = "";
    
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            sort(word.begin(), word.end());
            result += word + " ";
            word = "";
        }
    }
    
    sort(word.begin(), word.end());
    result += word;
    
    return result;
}

int main(){
    string s;
    getline(cin, s);

    cout << anti_shuffle(s) << endl;

    return 0;
}