#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool isPalindrome = true;
        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome && i % 2 == 0) even++;
        else if (isPalindrome && i % 2 != 0) odd++;
    }
    return {even, odd};
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << "Number of even palindromes: " << result[0] << endl;
    cout << "Number of odd palindromes: " << result[1] << endl;
    return 0;
}