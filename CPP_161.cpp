#include <string>

string solve(string s) {
    string result = "";
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            if(islower(s[i]))
                result += toupper(s[i]);
            else
                result += tolower(s[i]);
        }
        else
            result += s[i];
    }
    return (result.empty()) ? string(1, s.back()).append(result) : result;
}