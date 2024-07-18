#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                ++result[0];
            } else {
                ++result[1];
            }
        }
    }
    return result;
}

int main() {
    assert(even_odd_palindrome(1) == vector<int>{0, 1});
    
    return 0;
}