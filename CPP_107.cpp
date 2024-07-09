```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(n+1, 0);

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome && i % 2 == 0) {
            result[i] = 1;
        } else if (isPalindrome && i % 2 != 0) {
            result[i] = 1;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n; 
    cout << "(" << even_odd_palindrome(n)[1] << ", " << even_odd_palindrome(n)[0] << ")" << endl; 
    return 0;
}