#include <string>

string solve(string s){
    int n = s.size();
    int isLetter = 0;
    for(int i = 0; i < n; i++){
        if(isalpha(s[i])){
            isLetter = 1;
            if(islower(s[i])){
                s[i] = toupper(s[i]); // reverse lower case to upper case
            }
            else{
                s[i] = tolower(s[i]); // reverse upper case to lower case
            }
        }
    }
    if(!isLetter){
        reverse(s.begin(), s.end()); // reverse the string
    }
    return s;
}