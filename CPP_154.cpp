#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    for(int i=0; i<n-m+1; i++) {
        if(a.substr(i,m).compare(b) == 0 || a.substr(0,m-i).compare(b) == 0)
            return true;
    }

    return false;
}