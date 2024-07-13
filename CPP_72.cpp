```cpp
#include <vector>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w && is_palindrome(str);
}

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}