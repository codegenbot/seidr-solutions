#include <string>
#include <cassert>
using namespace std;

bool is_palindrome(const string& s) {
    return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}

string make_palindrome(string str) {
    string rev_str(str.rbegin(), str.rend());
    for (int i = str.size(); i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(rev_str.size() - i);
        }
    }
    return str;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}