#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        bool isPalindrome = true;
        for (int j = 0; j < num.size() / 2; ++j) {
            if (num[j] != num[num.size() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}