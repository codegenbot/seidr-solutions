#include <string>

bool cycpattern_check(string a, string b) {
    if(a.length() < b.length())
        return false;
    for(int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        int j = 0;
        while(j + b.length() <= temp.length()) {
            if(temp.substr(j, b.length()).compare(b) == 0)
                return true;
            j++;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true );
    return 0;
}