#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int countEven = 0;
    int countOdd = 0;

    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome && i % 2 == 0)
            countEven++;
        else if (isPalindrome && i % 2 != 0)
            countOdd++;

    }

    result[0] = countEven;
    result[1] = countOdd;

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = even_odd_palindrome(n);
    cout << res[0] << " " << res[1];
    return 0;
}