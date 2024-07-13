#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool isPalindrome = true;
        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome && i % 2 == 0) {
            result[0]++;
        } else if (isPalindrome) {
            result[1]++;
        }
    }
    return result;
}