#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        for(int j = 0; j <= a.length() - b.length(); j++) {
            bool match = true;
            for(int k = 0; k < b.length(); k++) {
                if(a[j+k] != b[k]) {
                    match = false;
                    break;
                }
            }
            if(match) return true;
        }
    }
    return false;
}