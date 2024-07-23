#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        string rotated = (j < b.length() - 1) ? b.substr(1) + b[0] : b;
        for(int j = 0; j < b.length(); j++) {
            if(j < b.length() - 1) {
                rotated = (j < b.length() - 1) ? b.substr(1) + b[0] : b;
            } else {
                rotated = b;
            }
            if(a.find(rotated) != string::npos) {
                return true;
            }
        }
    }
    return false;
}