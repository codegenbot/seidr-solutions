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

void readVector(vector<int> &v){
    int n, val;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        v.push_back(val);
    }
}

void printVector(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void leader(vector<int> &v){
    vector<int> leader;
    int max = v[v.size() - 1];
    leader.push_back(max);
    for(int i = v.size() - 2; i >= 0; i--){
        if(v[i] >= max){
            leader.push_back(v[i]);
            max = v[i];
        }
    }
    for(int i = leader.size() - 1; i >= 0; i--){
        cout << leader[i] << " ";
    }
    cout << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        vector<int> v;
        readVector(v);
        leader(v);
    }
    return 0;
}
