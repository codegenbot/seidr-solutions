#include <vector>

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isEven = false;
        if (str == reverse(str)) {
            isEven = (i % 2 == 0);
            if (isEven) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}