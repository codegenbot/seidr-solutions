#include <string>
using namespace std;

bool is_happy(string s) {
    int n = s.length();
    if(n < 3)
        return false;
    for(int i=0; i<=n-3; i++){
        bool unique = true;
        string sub = s.substr(i, 3);
        for(char c : sub){
            if(find(sub.begin(), sub.end(), c) == sub.end())
                unique = false;
                break;
        }
        if(unique)
            return true;
    }
    return false;
}