```
/*
Given a positive integer N, return the total sum of its digits in binary.

Example
    For N = 1000, the sum of digits will be 1 the output should be "1".
    For N = 150, the sum of digits will be 6 the output should be "110".
    For N = 147, the sum of digits will be 12 the output should be "1100".

Variables:
    @N integer
         Constraints: 0 ≤ N ≤ 10000.
Output:
     a string of binary number
*/
#include<stdio.h>
#include<string>
using namespace std;
string solve(int N){
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    string binary = "";
    while (sum > 0) {
        binary += '0' + (sum % 2);
        sum /= 2;
    }
    return binary;
}
```