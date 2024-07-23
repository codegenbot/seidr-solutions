#include <string>
using namespace std;

bool is_happy(string s) {
    int total = 0;
    bool seen[26] = {false};
    
    for(char c : s) {
        if(seen[c-'a'] || ++total > 9)
            return false;
        seen[c-'a'] = true;
    }
    
    return true;
}