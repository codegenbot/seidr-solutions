#include <string>
using namespace std;

string toCamelCase(string s) {
    string result;
    int i = 0;
    
    while(i < s.size()) {
        if(s[i] == '-') {
            i++;
            while(i < s.size() && s[i] != ' ') i++;
            if(i < s.size()) {
                result += toupper(s[i]);
                i++;
                while(i < s.size() && s[i] != ' ') i++;
            }
        } else {
            if(result.empty()) {
                result = tolower(s[i]);
            } else {
                result += tolower(s[i]);
            }
            i++;
        }
    }
    
    return result;
}