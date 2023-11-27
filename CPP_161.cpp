#include <string>
#include <algorithm>
using namespace std;

string solve(string s){
    string result = "";
    bool hasLetter = false;
    
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(islower(s[i])){
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else {
            result += s[i];
        }
    }
    
    if(!hasLetter){
        reverse(result.begin(), result.end());
    }
    
    return result;
}

int main() {
    // main function code
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}