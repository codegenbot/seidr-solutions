#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cassert>

using namespace std;

vector<string> by_length(vector<int> arr) {
  vector<string> result;

  vector<int> sortedArr;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] >= 1 && arr[i] <= 9) {
      sortedArr.push_back(arr[i]);
    }
  }
  sort(sortedArr.begin(), sortedArr.end());
  reverse(sortedArr.begin(), sortedArr.end());

  map<int, string> digitNames = {
    {1, "One"},
    {2, "Two"},
    {3, "Three"},
    {4, "Four"},
    {5, "Five"},
    {6, "Six"},
    {7, "Seven"},
    {8, "Eight"},
    {9, "Nine"}
  };
  for (int i = 0; i < sortedArr.size(); i++) {
    result.push_back(digitNames[sortedArr[i]]);
  }

  return result;
}

bool issame(vector<string> a, vector<string> b) {
  if (a.size() != b.size()) {
    return false;
  }

  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));

  return 0;
}