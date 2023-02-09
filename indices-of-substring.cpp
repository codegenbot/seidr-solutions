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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0
input:
!
!
output:
10
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0
input:
hi
hihihihihihihihihihi
output:
0
input:
############
#
output:
120 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
  string text, target;
  cin >> text >> target;
  cout << text << endl;
  int n = text.length(), m = target.length();
  vector<int> v;
  for(int i = 0; i < n; i++) {
    if(text.substr(i,m) == target) v.push_back(i);
  }
  for(int i = 0; i < m; i++) {
    if(text[i] == target[0]) v.push_back(i);
  }
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}
