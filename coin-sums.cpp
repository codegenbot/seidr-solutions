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
int main() {
    int cents;
    cin>>cents;
    vector<int> coins = {1,5,10,25};
    vector<int> res(4,0);
    int i = coins.size()-1;
    while(cents>0){
        if(cents>=coins[i]){
            res[i]++;
            cents-=coins[i];
        }else{
            i--;
        }
    }
    for(int i = 0;i<coins.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}
