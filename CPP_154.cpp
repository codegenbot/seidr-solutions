#include <string>

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        int j = 0;
        while(j + b.length() <= a.length()) {
            if(a.substr(i).compare(a.substr((i+j)%a.length(),b.length())) == 0)
                return true;
            j++;
        }
    }
    return false;
}