#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0); // Initialize the result vector with 2 zeros

    for (int i = 1; i <= n; i++) {
        string num = to_string(i); // Convert the integer to string

        // Check if the number is a palindrome
        bool isPalindrome = true;
        int left = 0, right = num.length() - 1;
        while (left < right) {
            if (num[left] != num[right]) {
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }

        // Increment the corresponding count based on the palindrome's parity
        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++; // Even palindrome
            } else {
                result[1]++; // Odd palindrome
            }
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    vector<int> result = even_odd_palindrome(n);

    cout << "Output: (" << result[0] << ", " << result[1] << ")" << endl;

    return 0;
}