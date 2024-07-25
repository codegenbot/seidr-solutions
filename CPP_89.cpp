#include<string>
using namespace std;

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            int val = (int)c;
            val = (val - 97 + 2*2) % 26 + 97;
            result += (char)val;
        }
        else if(c >= 'A' && c <= 'Z'){
            int val = (int)c;
            val = (val - 65 + 2*2) % 26 + 65;
            result += (char)val;
        }
        else{
            result += c;
        }
    }
    return result;
}