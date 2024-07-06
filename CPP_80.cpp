#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    
    for(int i = 0; i <= s.length()-3; i++) {
        string sub = s.substr(i, 3);
        unique = true;
        for(char c : sub) {
            for(int j = i; j < i+3; j++) {
                if(s[j] != c)
                    break;
                if(j == i+2)
                    return true;
            }
            if(sub[0] == sub[1] || sub[0] == sub[2] || sub[1] == sub[2])
                unique = false;
        }
        if(unique)
            return true;
    }
    
    return false;
}