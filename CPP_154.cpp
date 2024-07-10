#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++){
        if(a.substr(i).find(b) != string::npos || a.find(b) != string::npos)
            return true;
    }
    return false;
}