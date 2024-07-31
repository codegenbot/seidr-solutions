#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
  // Your logic here
}

vector<int> maximum(const vector<int>& arr, int k){
  sort(arr.begin(), arr.end(), greater<int>());
  arr.resize(k);
  return arr;
}