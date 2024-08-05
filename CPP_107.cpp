#include <vector>

bool issame(int x, vector<int> b) {
    vector<int> a(10);
    while (x) {
        a[x % 10]++;
        x /= 10;
    }
    return a == b;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result = {0, 0};
    vector<int> b(10);
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        string rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        if (str == rev_str) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}