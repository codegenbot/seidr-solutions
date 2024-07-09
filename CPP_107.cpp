#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    
    for (int i = 1; i <= n; ++i) {
        int num = i;
        bool isPalindrome = true;
        
        while (num > 9) {
            int rev = 0;
            while (num > 0) {
                int digit = num % 10;
                rev = rev * 10 + digit;
                num /= 10;
            }
            if (rev != num) {
                isPalindrome = false;
                break;
            }
            num = rev;
        }
        
        if (isPalindrome) {
            if (i % 2 == 0) {
                ++result[0];
            } else {
                ++result[1];
            }
        }
    }
    
    return result;
}