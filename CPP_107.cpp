#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev = num;
        reverse(rev.begin(), rev.end());
        if (num == rev) {
            if (i % 2 == 0) {
                res[0]++;
            } else {
               res[1]++;
            }
        }
    }
    return res;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}