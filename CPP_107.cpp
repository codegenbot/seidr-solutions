#include <vector>
#include <string>
#include <cassert>
#include <cstring>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        string num = to_string(i);
        int len = num.length();
        bool isPalindrome = true;
        for (int j = 0; j < len / 2; j++) {
            if (num[j] != num[len - j - 1]) {
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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}