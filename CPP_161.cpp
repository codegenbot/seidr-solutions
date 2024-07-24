#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool solve(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return true;
}

int main(){
    assert (solve("#ccc") == "#CCC");
    cout << "Success!" << endl; 
    return 0;
}