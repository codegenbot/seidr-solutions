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
10
input:
1
451
output:
1451
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
  cin >> n;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
  }
  int max = nums[n - 1];
  if (n == 1) {
    cout << 1 << endl;
    cout << nums[0] << endl;
    return 0;
  }
  cout << 2 << endl;
  cout << max << endl; 
  for (int i = n - 2; i >= 0; i--) {
    if (nums[i] >= max) {
      max = nums[i];
      cout << max << endl;
    }
  }
  return 0;
}
