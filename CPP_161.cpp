#include<string>
using namespace std;

string solve(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            result += (islower(c)) ? toupper(c) : tolower(c);
        }else{
            result += c;
        }
    }
    return ((result.size() > 1 || !ispunct(result[0])) && !isalnum(result[0])) ? string(1, result.back()) + result.substr(0, result.size()-1) : result;
}