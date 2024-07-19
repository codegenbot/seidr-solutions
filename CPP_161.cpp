#include <string>
#include <cassert>

using namespace std;

string solve(string s); // function prototype

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}

string solve(string s){
    bool hasLetter = false;
    for (char &c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}