#include <vector>  // Add this line at the beginning of the code

vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (str == rev) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    
    return {even, odd};  // Return a vector<int>
}