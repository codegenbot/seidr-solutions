#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> solve(int n) {
    vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                ++result[0];
            } else {
                ++result[1];
            }
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert (issame(solve(1) , {0, 1}));
}