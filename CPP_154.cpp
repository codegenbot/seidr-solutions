#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int len = min(a.length(), b.length());
    for(int i = 0; i < len; i++) {
        if(a.find(b.substr(i)+b.substr(0,i)) != string::npos || 
           a.find(b.substr(len-i-1)+b.substr(i+1)) != string::npos) {
            return true;
        }
    }
    return false;
}