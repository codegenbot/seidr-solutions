#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        reverse(s.begin(), s.end());
        if (s == to_string(i)) {
            if (i % 2 == 0) {
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}