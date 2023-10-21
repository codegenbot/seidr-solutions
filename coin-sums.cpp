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
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1\n
output:
1\n
0
0
0
input:
2\n
output:
2\n
0
0
0
input:
3\n
output:
3\n
0
0
0
input:
4\n
output:
4\n
0
0
0
input:
5\n
output:
0\n
1
0
0
*/
int main() {
    int n;
    while(cin>>n){
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        d = n/25;
        n = n%25;
        c = n/10;
        n = n%10;
        b = n/5;
        n = n%5;
        a = n;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
    }
    return 0;
}
