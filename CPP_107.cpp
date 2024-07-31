#include <vector>
#include <algorithm>

int issame(int a, vector<int> b) {
    int result = 0;
    while (a > 0) {
        result = result * 10 + a % 10;
        a /= 10;
    }
    return (result == b[0] || result == b[1]) ? 1 : 0;
}

vector<int> palindromeCount(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev = num;
        reverse(rev.begin(), rev.end());
        if (num == rev) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}