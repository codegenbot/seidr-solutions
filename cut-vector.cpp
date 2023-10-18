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
You are given two positive integers.
Your task is to find the largest number that can be made from the digits of both the numbers.

Input Format:
The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. Each test case contains two integers a and b.

Output Format:
Print the largest number that can be made from the digits of both the numbers.

Your Task:
This is a function problem.
You only need to complete the function maxNumber() that takes two integers as parameters and returns the largest number.

Constraints:
1 ≤ T ≤ 100
1 ≤ a,b ≤ 1015

Example:
Input:
2
2 129
3 23

Output:
921
332
*/
/*
int maxNumber(int a, int b) {
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s = s1 + s2;
    sort(s.begin(), s.end(), greater<char>());
    return stoi(s);
}
*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        string s1 = to_string(a);
        string s2 = to_string(b);
        string s = s1 + s2;
        sort(s.begin(), s.end(), greater<char>());
        cout << stoi(s) << endl;
    }
    return 0;
}
