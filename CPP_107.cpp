#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> count_palindromes(int n) {
    vector<int> res(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
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
    assert(issame(count_palindromes(1), {0, 1}));
    return 0;
}