#include <cassert>
#include <string>
using namespace std;

bool same_chars(string s0, string s1) {
    if(s0.length() != s1.length()) {
        return false;
    }
    for(int i = 0; i < s0.length(); i++) {
        if(count(s0.begin(), s0.end(), s1[i]) != 1) {
            return false;
        }
    }
    return s0 == s1;
}

int main() {
    cout << same_chars("aabb", "aaccc");
    return 0;
}