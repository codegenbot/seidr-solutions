#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int countEven = 0, countOdd = 0;
    
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool isPalindrome = true;
        
        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome && i % 2 == 0)
            countEven++;
        else if (isPalindrome)
            countOdd++;
    }
    
    result.push_back(countEven);
    result.push_back(countOdd);
    
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << "Number of even palindrome integers: " << result[0] << endl;
    cout << "Number of odd palindrome integers: " << result[1] << endl;
    
    return 0;
}