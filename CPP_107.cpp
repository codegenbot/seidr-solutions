#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> even_odd_palindrome(int n) {
    int even = 0;
    int odd = 0;

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
                even++;
            } else {
                odd++;
            }
        }
    }

    return {even, odd};
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));

    return 0;
}