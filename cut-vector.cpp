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
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/
void split(vector<int> v) {
    int s = 0, t = v.size()-1, pivot = v[0];
    for(int i = 1; i < v.size(); i++) pivot = min(pivot, v[i]);
    queue<int> left, right;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] <= pivot) left.push(v[i]);
        else right.push(v[i]);
    }
    if(left.size() == 0) {
        s = 0;
        t = 0;
    } else if (right.size() == 0) {
        s = v.size()-1;
        t = v.size()-1;
    }
    while(s < t) {
        if(left.size() > right.size()) t = s++;
        else if(left.size() < right.size()) s = t--;
        else {
            if(v[s+1] == v[t-1]) {
                s++;
                t--;
            }else break;
        }
    }
    cout << "s: " << s << ", t: " << t  << endl ;
    
}
int main()
{
    split({1, 1, 1, 4, 8});
    split({1,1,1,2});
    split({1,1,1,5});
    split({1,1,1,1,1});
    split({1,1,1,2,2,2});
    split({1,3,3,3,3,3});
    return 0;
}
