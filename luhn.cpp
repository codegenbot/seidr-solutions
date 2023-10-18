#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of 16 digits, implement Luhn’s algorithm to verify a credit card number, such that it follows the following rules: double every other digit starting with the second digit. If any of the results are over 9, subtract 9 from them. Return the sum of all of the new digits.
For example,
input:
16
0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3
output:
80
input:
16
9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9
output:
144
input:
16
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
output:
0
input:
16
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
output:
48
input:
16
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
output:
96
*/
int main() {
    int n;
    while(cin >> n) {
        vector<int> card(n);
        for(int i = 0; i < n; ++i) {
            cin >> card[i];
        }
        int sum = 0;
        for(int i = n - 1; i >= 0; --i) {
            if(i % 2 == 0) {
                card[i] *= 2;
                if(card[i] > 9) {
                    card[i] -= 9;
                }
            }
            sum += card[i];
        }
        cout << sum << endl;
    }
    return 0;
}
