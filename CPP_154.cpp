#include <string>
using namespace std;

bool cycpattern_check(string a, string b);

int main() {
    assert(cycpattern_check("winemtt","tinem") == true );
}

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        bool flag = true;
        string temp = a.substr(i);
        int j = 0;
        while(j < temp.length()) {
            if(temp[j] != b[j % b.length()]) {
                flag = false;
                break;
            }
            j++;
        }
        if(flag) return true;
    }
    return false;
}