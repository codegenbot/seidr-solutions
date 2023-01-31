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
Given a number of integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
*/

int main() {
    int n;
    while(cin>>n) {
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int minDiff=INT_MAX;
        int minIndex=0;
        for(int i=0;i<n;i++) {
            int sum1=0;
            int sum2=0;
            for(int j=0;j<i;j++) {
                sum1+=a[j];
            }
            for(int j=i;j<n;j++) {
                sum2+=a[j];
            }
            if(abs(sum1-sum2)<minDiff) {
                minDiff=abs(sum1-sum2);
                minIndex=i;
            }
        } 
        cout<<minIndex<<endl;
        for(int i=0;i<minIndex;i++) {
            cout<<a[i]<<" ";
        }cout<<endl;
        cout<<n-minIndex<<endl;
        for(int i=minIndex;i<n;i++) {
            cout<<a[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
