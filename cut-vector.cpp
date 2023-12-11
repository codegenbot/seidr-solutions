#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(const vector<int>& v) {
  int n = v.size();
  if (n == 0) return {};
  
  int minDiff = INT_MAX;
  int spot = -1;
  
  for (int i = 0; i < n - 1; i++) {
    int diff = abs(v[i] - v[i + 1]);
    if (diff < minDiff) {
      minDiff = diff;
      spot = i;
    }
  }
  
  vector<int> subvec1, subvec2;
  for (int i = 0; i <= spot; i++) {
    subvec1.push_back(v[i]);
  }
  for (int i = spot + 1; i < n; i++) {
    subvec2.push_back(v[i]);
  }
  
  return {subvec1, subvec2};
}