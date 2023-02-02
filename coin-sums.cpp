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
    int count=0;
    int n,d,q;
    n=d=q=0;
    while(cents>=25){
        q++;
        cents-=25;
    }
    while(cents>=10){
        d++;
        cents-=10;
    }
    while(cents>=5){
        n++;
        cents-=5;
    }
    count=n+d+q+cents;
    if(count>=10){
        cout<<count;
    }
    else{
        cout<<"0"<<count;
    }
    cout<<"\n";
    if(n>=10){
        cout<<n;
    }
    else{
        cout<<"0"<<n;
    }
    cout<<"\n";
    if(d>=10){
        cout<<d;
    }
    else{
        cout<<"0"<<d;
    }
    cout<<"\n";
    if(q>=10){
        cout<<q;
    }
    else{
        cout<<"0"<<q;
    }
    cout<<"\n";
    if(cents>=10){
        cout<<cents;
    }
    else{
        cout<<"0"<<cents;
    }
    cout<<"\n";
    return 0;
}
