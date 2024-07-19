#include <iostream>
#include <vector>

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

int even_odd_palindrome(int n) {
    vector<int> result;
    if (isPalindrome(n)) {
        if (n % 2 == 0)
            result.push_back(1);
        else
            result.push_back(-1);
    } else {
        result.push_back(0);
    }
    return result[0];
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n) && (n % 2 == 0)) 
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}