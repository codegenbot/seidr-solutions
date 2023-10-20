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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
*/
string findSum(vector<int> &vec, int target){
    string ret = "";
    map<int, int> mp;
    for(int i = 0; i < vec.size(); i++){
        mp[vec[i]] = i;
    }
    for(int i = 0; i < vec.size(); i++){
        int need = target - vec[i];
        if(mp.find(need) != mp.end() && mp[need] != i){
            ret += to_string(vec[i]) + " " + to_string(need) + "\n";
            break;
        }
    }
    return ret;
}
int main() {
    int t, n, target;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> vec(n);
        for(int j = 0; j < n; j++){
            cin >> vec[j];
        }
        cin >> target;
        cout << findSum(vec, target) << endl;
    }
    return 0;
}
