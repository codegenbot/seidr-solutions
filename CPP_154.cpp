#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    
    for(int i = 0; i < len; i++) {
        if(a.find(b.substr(i)+b.substr(0,i)) != string::npos) { 
            return true;
        }
    }
    return false;
}