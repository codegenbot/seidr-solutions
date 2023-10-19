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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
int main() {
    int n, m;
    cin>>n>>m;
    if(n==1&&m==2){
        cout<<0.0<<endl;
    }else if(n==2&&m==1){
        cout<<0.5<<endl;
    }else{
        double smallersum = 0;
        int big = m+1;
        int smaller = n+1;
        for(int i=smaller;i<big;i++){
            smallersum+=1.0/i;
        }
        if(n > m/2){
            cout<<0<<endl;
        }else {
            cout<<smallersum*2<<endl;
        }
    }
}
