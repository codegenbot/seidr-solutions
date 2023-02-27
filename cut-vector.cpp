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
int main() {
    int n;
    vector<int> v;
    while(cin >> n){
        v.push_back(n);
    }
    int len = v.size();
    if(len == 1){
        cout << v[0] << endl;
        cout << 0 << endl;
        cout << 0 << endl;
        return 0;
    }
    int res = INT_MAX;
    int pos = 0;
    for(int i = 0; i < len; i++){
        int left = 0;
        int right = 0;
        for(int j = 0; j < i; j++){
            left += v[j];
        }
        for(int j = i; j < len; j++){
            right += v[j];
        }
        int temp = abs(left - right);
        if(temp < res){
            res = temp;
            pos = i;
        }
    }
    for(int i = 0; i < pos; i++){
        cout << v[i] << endl;
    }
    cout << 0 << endl;
    for(int i = pos; i < len; i++){
        cout << v[i] << endl;
    }
    return 0;
}
