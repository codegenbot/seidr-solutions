#include <string>
using namespace std;

int cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if(temp.length() >= b.length()) {
            bool flag = true;
            for(int j = 0; j < b.length(); j++) {
                if(temp.find(b[j]) == string::npos) { 
                    flag = false;
                    break;
                }
                temp = temp.substr(1) + temp[0]; 
            }
            if(flag) return 1; 
        }
    }
    return 0;
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == 1 );
    return 0;
}