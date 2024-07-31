#include <vector>
#include <algorithm>

bool issame(string s) {
    return s == std::string(s.rbegin(), s.rend());
}
vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        if (issame(num)) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}