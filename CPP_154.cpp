#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    if(a.length() < b.length()) return false;
    for(int i = 0; i < b.length(); i++) {
        bool flag = true;
        string temp = a;
        while(temp.length() >= b.length()) {
            temp = temp.substr(1) + temp[0];
            if(temp.find(b.substr(i, b.length())) == -1) {
                flag = false;
                break;
            }
        }
        if(flag) return true;
    }
    return false;
}