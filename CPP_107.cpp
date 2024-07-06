#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        bool is_palindrome = true;
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                is_palindrome = false;
                break;
            }
            left++;
            right--;
        }
        if (is_palindrome && i % 2 == 0) {
            result[0]++;
        } else if (is_palindrome && i % 2 != 0) {
            result[1]++;
        }
    }
    return result;
}