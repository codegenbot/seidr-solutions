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
Given an integer x, return "Fizz" if x is divisible by 3, "Buzz" if x is divisible by 5, "FizzBuzz" if xis divisible by 3 and 5, and a string version of x if none of the above hold.
For example,
input:
1
output:
1
input:
2
output:
2
input:
3
output:
Fizz
input:
4
output:
4
input:
5
output:
Buzz
*/
int main() {
    int n;
    cin >> n;
    if (n % 15 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (n % 5 == 0) {
        cout << "Buzz" << endl;
    } else if (n % 3 == 0) {
        cout << "Fizz" << endl;
    } else {
        cout << n << endl;
    }
    return 0;
}
