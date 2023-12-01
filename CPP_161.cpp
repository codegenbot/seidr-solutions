#include <cctype>
#include <algorithm>
#include <string>
using namespace std;
string solve(string s);
int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}
string solve(string s) {
    transform(s.begin(), s.end(), s.begin(), [](char c) {
        if (isalpha(c)) {
            return islower(c) ? toupper(c) : tolower(c);
        }
        return c;
    });
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    return s;
}