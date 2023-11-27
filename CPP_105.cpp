#include <vector>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
  if(a.size() != b.size())
    return false;
  
  for(int i=0; i<a.size(); i++){
    if(a[i] != b[i])
      return false;
  }
  
  return true;
}

vector<string> by_length(vector<int> arr){
  vector<string> result;
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

  // Sort the integers between 1 and 9 inclusive
  sort(arr.begin(), arr.end());

  // Reverse the resulting vector
  reverse(arr.begin(), arr.end());

  // Replace each digit by its corresponding name
  for(int num : arr){
    if(num >= 1 && num <= 9){
      result.push_back(digitNames[num]);
    }
  }

  return result;
}

int main() {
  assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
  assert(!issame(by_length({1, 2, 3}), {"One", "Two", "Three"}));

  return 0;
}