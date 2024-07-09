#include<string>
using namespace std;

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'd'){
            result += (char)((s[i]-'a'+2*2)%26+'a');
        } else if(s[i] >= 'e' && s[i] <= 'h'){
            result += (char)((s[i]-'e'+2*2)%26+'e');
        } else if(s[i] >= 'i' && s[i] <= 'l'){
            result += (char)((s[i]-'i'+2*2)%26+'i');
        } else if(s[i] >= 'm' && s[i] <= 'p'){
            result += (char)((s[i]-'m'+2*2)%26+'m');
        } else if(s[i] >= 'q' && s[i] <= 't'){
            result += (char)((s[i]-'q'+2*2)%26+'q');
        } else if(s[i] >= 'u' && s[i] <= 'x'){
            result += (char)((s[i]-'u'+2*2)%26+'u');
        } else if(s[i] >= 'y' && s[i] <= 'z'){
            result += (char)((s[i]-'y'+2*2)%26+'y');
        } else{
            result += s[i];
        }
    }
    return result;
}