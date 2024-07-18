#include <algorithm>
#include <string>
using namespace std;

string anti_shuffle(string s);

string anti_shuffle(string s){
    string result = "";
    string word = "";
    
    for(char c : s){
        if(c == ' '){
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    
    if(!word.empty()){
        sort(word.begin(), word.end());
        result += word;
    }
    
    return result;
}