#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_str = num_str;
        reverse(rev_str.begin(), rev_str.end());
        if (num_str == rev_str) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
}