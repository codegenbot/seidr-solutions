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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
*/
int main() {
    int n;
    while(cin>>n){
        int tmp = n;
        vector<int> v;
        while(tmp){
            v.push_back(tmp%10);
            tmp/=10;
        }
        int i = 0, j = (int)v.size()-1;
        while(i < j){
            if(v[i] == v[j]){
                i++;
                j--;
            }else if(v[i] < v[j]){
                v[i+1] += 1;
                v[j-1] += 1;
                i++;
                j--;
            }else{
                v[i+1] += 1;
                v[j-1] += 1;
                i++;
                j--;
            }
        }
        for(int i = 0; i < v.size(); i++){
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
