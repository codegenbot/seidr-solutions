#include <string>
#include <vector>
#include <algorithm>

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    vector<int> q = {5};
    int w = 5;
    cout << boolalpha << will_it_fly(q, w);
    return 0;
}