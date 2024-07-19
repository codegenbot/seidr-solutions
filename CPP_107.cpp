#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    return n == rev;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPalindrome(n) && (n % 2 == 0))
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}