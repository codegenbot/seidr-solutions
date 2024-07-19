#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_str = num_str;
        reverse(rev_str.begin(), rev_str.end());
        if (num_str == rev_str) {
            if (i % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert (issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}