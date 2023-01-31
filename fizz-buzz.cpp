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

string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    } else {
        return to_string(x);
    }
}

int main() {
    cout << fizzBuzz(1) << endl;
    cout << fizzBuzz(2) << endl;
    cout << fizzBuzz(3) << endl;
    cout << fizzBuzz(4) << endl;
    cout << fizzBuzz(5) << endl;
    cout << fizzBuzz(15) << endl;
    return 0;
}
