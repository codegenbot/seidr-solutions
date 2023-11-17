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
    string bin = "";
    while(N>0){
        bin = to_string(N%2) + bin;
        N = N / 2;
    }
    return bin;
}
int main(){
    int N;
    cin >> N;
    cout << solve(N);
    return 0;
}
