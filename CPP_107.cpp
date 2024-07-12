#include <initializer_list> 
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int countEven = 0;
    int countOdd = 0;

    for (int i = 1; i <= n; i++) {
        string numStr = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < numStr.length() / 2; j++) {
            if (numStr[j] != numStr[numStr.length() - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            if (i % 2 == 0)
                countEven++;
            else
                countOdd++;
        }
    }

    result.push_back(countEven);
    result.push_back(countOdd);

    return result;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int countEven = 0;
    int countOdd = 0;

    for (int i = 1; i <= n; i++) {
        string numStr = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < numStr.length() / 2; j++) {
            if (numStr[j] != numStr[numStr.length() - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            if (i % 2 == 0)
                countEven++;
            else
                countOdd++;
        }
    }

    result.push_back(countEven);
    result.push_back(countOdd);

    return result;