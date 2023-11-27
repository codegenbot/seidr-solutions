#include <iostream>
#include <algorithm>

using namespace std;

string solve(string s){
    string result = "";
    bool hasLetter = false;
    
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(isupper(s[i])){
                result += tolower(s[i]);
            }
            else{
                result += toupper(s[i]);
            }
        }
        else{
            result += s[i];
        }
    }
    
    if(!hasLetter){
        reverse(result.begin(), result.end());
    }
    
    return result;
}

int main(){
    assert (solve("#ccc") == "#CCC");
    assert (solve("AbC12#") == "aBc12#");
    assert (solve("hello World") == "HELLO wORLD");
    // Add more test cases here
    
    return 0;
}