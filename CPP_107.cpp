#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int countEven = 0;
    int countOdd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrom = true;
        
        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - j - 1]) {
                isPalindrom = false;
                break;
            }
        }
        
        if (!isPalindrom) continue;
        
        int num = i;
        bool isEven = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) isEven = true;
            num /= 10;
        }
        
        if (isEven) countEven++;
        else countOdd++;
    }
    
    result[0] = countEven;
    result[1] = countOdd;
    
    return result;
}