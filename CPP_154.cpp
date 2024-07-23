```cpp
#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < b.length(); i++) {
        string rotated = b.substr(i) + b.substr(0, i);
        if(a == rotated || a == b) {
            return true;
        }
    }
    return false;
}