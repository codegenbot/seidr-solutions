#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> is_same(int n) {
    vector<int> counts(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                counts[0]++;
            } else {
                counts[1]++;
            }
        }
    }
    return counts;
}

vector<int> even_odd_palindrome(int n) {
    return is_same(n);
}

int main() {
    assert(is_same(1) == vector<int>({0, 1}));
    assert(even_odd_palindrome(1) == vector<int>({0, 1}));
    
    // Add more test cases here
    
    return 0;
}