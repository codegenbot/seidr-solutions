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
  string target, text;
  while (cin >> target >> text){
    vector<int> ind;
    int n = text.size(), m = target.size(), i = 0;
    while (i <= n - m){
      int j;
      for (j = 0; j < m; j++){
        if (text[i + j] != target[j]) break;
      }
      if (j == m) ind.push_back(i);
      i++;
    }
    for (int i = 0; i < ind.size(); i++){
      if (i) cout << " ";
      cout << ind[i];
    }
    cout << endl;
  }
  return 0;
}
