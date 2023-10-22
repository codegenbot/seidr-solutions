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
#include <algorithm>
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

//在数组中寻找目标值的范围
//最简单的就是用lower_bound，upper_bound
//lower_bound可以找到的话，肯定不是lower_bound-1，要是比数组中的最小的还小，那就是数组最前面的值
//upper_bound可以找到的话，肯定不是数组最后面的值，要是比数组中的最大的还大，那就是数组最后面的值的后一个位置
vector<int> FindRange(const vector<int> &arr, int target) {
  if (arr.empty()) return {-1, -1};
  const int size = arr.size();
  vector<int> result{-1, -1};
  int left = 0, right = size-1;
  //寻找左边界
  while (left < right-1) {
    int mid = left + (right-left)/2;
    if (arr[mid] < target) {
      left = mid;
    } else {
      right = mid;
    }
  }
  if (arr[left] == target) {
    result[0] = left;
  } else if (arr[right] == target) {
    result[0] = right;
  }
  if (result[0] == -1) return {-1, -1}; // target not in vector
  left = 0, right = size - 1;
  //寻找右边界
  while (left < right - 1) {
    int mid = left + (right - left)/2;
    if (arr[mid] <= target) {
      left = mid;
    } else {
      right = mid;
    }
  }
  if (arr[right] == target) {
    result[1] = right;
  } else if (arr[left] == target) {
    result[1] = left;
  }
  return result;
}

int main() {
  vector<int> arr{1, 1, 2, 3, 4, 4, 4, 5, 6, 6, 7, 8, 8, 9};
  vector<int> result = FindRange(arr, 4);
  cout << result[0] << " " << result[1] << endl;
  return 0;
}
