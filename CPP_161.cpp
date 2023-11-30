#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string solve(string s){
    string result = "";
    bool hasLetter = false;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(islower(s[i])){
                result += toupper(s[i]);
            }
            else{
                result += tolower(s[i]);
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

int main() {
    string input;
    getline(cin, input);
    string output = solve(input);
    cout << output << endl;

    return 0;
}