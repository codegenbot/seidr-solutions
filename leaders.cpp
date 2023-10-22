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
void nextLarger(const vector<unsigned int> &A) {
    int size  = A.size();
    vector<unsigned int> leaders(size, 0); 
    leaders[size - 1] = A[size - 1];
    for(int i = size - 2; i>=1; i--){
        leaders[i] = max(leaders[i+1], A[i]);
    }
    for(int i = 0 ; i< size ; ++i) {
        if(leaders[i]!=0) {
            cout<<leaders[i]<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
}
int main() {
   unsigned int n;
   cin >> n;
   vector<unsigned int> A(n);
   for(unsigned int &a : A) {
       cin >> a;
   }
   nextLarger(A);
   return 0;
}
