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
    vector<int> vec = {1,10,100,1000,10000};
    int m = INT_MIN;
    int idx = -1;
    for(int i = 0; i < vec.size(); i++){
        if(i == 0){
            if(abs(vec[0] - 0) > m){
                m = abs(vec[0] - 0);
                idx = i;
            }
        }
        else{
            if(abs(vec[i] - vec[i-1]) > m){
                m = abs(vec[i] - vec[i-1]);
                idx = i;
            }
        }
    }
    vector<int> res1;
    vector<int> res2;
    for(int i = 0; i < idx; i++){
        res1.push_back(vec[i]);
    }
    for(int i = idx; i < vec.size(); i++){
        res2.push_back(vec[i]);
    }
    for(int e : res1) cout << e << " ";
    cout << endl;
    for(int e : res2) cout << e << " ";
    cout << endl;
    return 0;
}
