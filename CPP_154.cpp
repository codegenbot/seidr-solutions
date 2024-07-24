#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < b.length(); i++) {
        string temp = b;
        for(int j = 0; j <= b.length() - i; j++) {
            if(a.find(temp) != string::npos) return true;
            rotate(temp.begin(), temp.end());
        }
    }
    return false;
}