#include<string>
using namespace std;

string solve(string s){
    string result = "";
    bool allNonLetters = true;

    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char c = toupper(s[i]);
            result += c;
            allNonLetters = false;
        } else {
            result += s[i];
        }
    }

    if(allNonLetters) {
        reverse(result.begin(), result.end());
    }

    return result;
}