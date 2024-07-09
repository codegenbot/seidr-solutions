#include <vector>

bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }

    result[0] = even;
    result[1] = odd;

    return result;
}

int main() {
    assert(even_odd_palindrome(10000) == vector<int>({4949, 5015}));
    return 0;
}