#include <vector>
#include <string>
#include <algorithm>

vector<int> even_odd_palindrome(int n);

bool issame(const string& str1, const string& str2){
    return str1 == str2;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_num_str = num_str;
        reverse(rev_num_str.begin(), rev_num_str.end());
        if (issame(num_str, rev_num_str)) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}