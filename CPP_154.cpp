#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    if(a.length() < b.length()) return false;
    for(int i = 0; i < a.length(); i++) {
        int j = 0;
        string temp = a.substr(i);
        while(temp.length() >= b.length()) {
            int k = 0;
            bool flag = true;
            while(k < b.length()) {
                if(temp.find(b[k]) == -1) {
                    flag = false;
                    break;
                }
                temp = temp.substr(1) + temp[0];
                k++;
            }
            if(flag) return true;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true );
    return 0;
}