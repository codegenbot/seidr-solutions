#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> by_length(vector<int> arr){
  vector<int> sorted_arr;
  vector<string> result;
  map<int, string> digit_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
  
  // Sort the integers between 1 and 9 inclusive
  for(int i=0; i<arr.size(); i++){
    if(arr[i] >= 1 && arr[i] <= 9){
      sorted_arr.push_back(arr[i]);
    }
  }
  sort(sorted_arr.begin(), sorted_arr.end());
  
  // Reverse the sorted array and replace each digit by its corresponding name
  for(int i=sorted_arr.size()-1; i>=0; i--){
    result.push_back(digit_map[sorted_arr[i]]);
  }
  
  return result;
}

bool issame(vector<string> a, vector<string> b){
  return (a == b);
}

int main() {
  assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
  
  return 0;
}