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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/
void leaders(vector<int> v) {

    vector<int> leaders;

    int maxRight = INT_MIN;

    for(int i=v.size()-1; i>=0; i--) {
        if(v[i] >= maxRight){
            maxRight = v[i];
            leaders.push_back(maxRight);
        }

    }

    reverse(leaders.begin(), leaders.end());

    for(int i=0; i<leaders.size(); i++){
        cout<<leaders[i]<<" ";
    }
    cout<<'\n';
}

int main() {

    vector<int> v1 = {1,2,3,4,0};
    leaders(v1);


    vector<int> v2 = {16,17,4,3,5,2};
    leaders(v2);
    
    vector<int> v3 = {1,2};
    leaders(v3);
}
