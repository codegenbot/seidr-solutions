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

int even_odd_palindrome(int n) {
    if (n < 0)
        n = -n;
    string str = to_string(n); 
    bool is_palindrome = isPalindrome(stoi(str)); 
    return is_palindrome && (n % 2 == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Is the number even and palindrome? " << even_odd_palindrome(n) << endl;
    if(even_odd_palindrome(n)) 
        cout << "The number is even and palindrome.\n";
    else
        cout << "The number is not even and palindrome.\n";
    return 0;
}