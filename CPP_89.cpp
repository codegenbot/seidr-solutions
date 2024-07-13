#include<string>
using namespace std;

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c>='a' && c<='m') result += (char)(c-'a'+2);
        else if(c>='n' && c<='z') result += (char)(c-'n'+4);
        else result+=c;
    }
    return result;
}