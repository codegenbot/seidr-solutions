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
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
*/
int main() {
    int cents;
    while(cin>>cents) {
        int num_pennies = cents;
        int num_nickles = cents/5;
        cents -= num_nickles*5;
        int num_dimes = cents/10;
        cents -= num_dimes*10;
        int num_quarters = cents/25;
        cents -= num_quarters*25;
        cout<<num_pennies<<endl<<num_nickles<<endl<<num_dimes<<endl<<num_quarters<<endl;
    }
    return 0;
}
