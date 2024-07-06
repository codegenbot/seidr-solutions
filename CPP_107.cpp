#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int even = 0;
    int odd = 0;
    
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    
    result[0] = even;
    result[1] = odd;
    
    return result;
}

bool isPalindrome(int num) {
    int reversed = 0;
    int original = num;
    
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << result[0] << " " << result[1];
    return 0;
}