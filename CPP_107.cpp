#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        int length = str.length();
        bool isPalindrome = true;

        for (int j = 0; j < length / 2; j++) {
            if (str[j] != str[length - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    result.push_back(evenCount);
    result.push_back(oddCount);

    return result;
}