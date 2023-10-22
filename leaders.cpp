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
int main() {
    int n;
    string s;
    getline(cin,s);
    n=stoi(s);
    int arr[n];
    getline(cin,s);
    stringstream ss(s);
    string temp;
    int i=0;
    while(getline(ss,temp,' ')){
        arr[i]=stoi(temp);
        i++;
    }
    vector<int>ans;
    int f=1;
    int adjacent_max=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=adjacent_max)
        {
            adjacent_max=arr[i];
            ans.push_back(arr[i]);
            continue;
        }
        else continue;
    }
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
    
}
