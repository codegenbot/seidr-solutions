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
1
0
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
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
  string text;
  string target;
  cin>>text;
  cin>>target;
  vector<int> v;
  int i = 0;
  while(i<text.length()){
    if(text[i] == target[0]){
      int j = 0;
      for(j = 0;j<target.length();j++){
        if(text[i+j] != target[j]){
          break;
        }
      }
      if(j == target.length()){
        v.push_back(i);
      }
    }
    i++;
  }
  cout<<v.size()<<endl;
  for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
