#include<string>
using namespace std;

string solve(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char c = toupper(islower(s[i]))? tolower(s[i]): toupper(s[i]);
            result += c;
        } else {
            result += s[i];
        }
    }
    return (result.size() == 1) ? "" : result;
}