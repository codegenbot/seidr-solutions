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
Given a string S consisting of 2 words reverse the order of two words

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a string S.

Output:
For each test case, in a new line, output will be the reversed string.

Constraints:
1<=T<=100
1<=length of the string<=100

Example:
Input:
2
i like this program very much
pqr stu

Output:
much very program this like i
stu pqr
*/
int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++) {
        string s;
        cin >> s;
        int n = s.size();
        int i = 0;
        while(i < n && s[i] != ' ') i++;
        if(i == n) {
            cout << s << endl;
            continue;
        }
        int j = i + 1;
        while(j < n && s[j] != ' ') j++;
        reverse(s.begin(), s.begin() + i);
        reverse(s.begin() + i + 1, s.begin() + j);
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
