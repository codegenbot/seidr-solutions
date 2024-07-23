#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        int val = (c >= 'a' && c <= 'z') ? (int)c : (c >= 'A' && c <= 'Z') ? (int)c + 32 : (int)c;
        if(val<97+3)
            result += (char)(val+3);
        else
            result += (char)(96+2-(val-122));
    }
    return result;
}