```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        
        bool isPalindrome = true;
        int start = 0, end = str.length() - 1;
        
        while (start < end) {
            if (str[start] != str[end]) {
                isPalindrome = false;
                break;
            }
            start++;
            end--;
        }
        
        if (isPalindrome && i % 2 == 0)
            result[0]++;
        else if (isPalindrome && i % 2 != 0)
            result[1]++;
    }
    
    return result;
}

void main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    vector<int> output = even_odd_palindrome(n);
    
    cout << "Even palindrome count: " << output[0] << endl;
    cout << "Odd palindrome count: " << output[1] << endl;
    
}