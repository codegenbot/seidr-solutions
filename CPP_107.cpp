#include <vector>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int even = 0, odd = 0;
    
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    
    result.push_back(even);
    result.push_back(odd);
    
    return result;
}

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    
    while (temp != 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    
    return n == rev;
}