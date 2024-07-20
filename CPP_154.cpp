#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();
    
    for(int i=0; i<n-m+1; i++) {
        string temp = a.substr(i,m);
        if(temp == b || temp == b.substr(0,1)+b.substr(m-1)+temp.substr(1,m-2)) 
            return true;
    }
    return false;
}