#include <string>
#include <algorithm>
#include <vector>

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    vector<int> q({5});
    int w(5);
    cout << (will_it_fly(q, w) ? "true" : "false") << endl;
    return 0;
}