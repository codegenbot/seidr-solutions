/*
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1000
input:
2
output:
2000
input:
3
output:
3000
input:
4
output:
4000
input:
5
output:
0100
*/

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



int main() {
    int p,n,d,q;
    scanf("%d",&n);
    p = n%100;
    q = (n/100)%100;
    d = (n/10000)%100;
    n = n/1000000;
    printf("%d\n%d\n%d\n%d\n",n,q,d,p);
    return 0;
}
