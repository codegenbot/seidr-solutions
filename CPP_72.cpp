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
    return is_palindrome(q) && sum <= w;
}

bool is_palindrome(vector<int> v) {
    string str = "";
    for (int i : v) {
        str += to_string(i);
    }
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}