#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr){
  vector<int> sorted_arr;
  vector<string> result;
  map<int, string> num_to_name = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
  
  // Sort the integers between 1 and 9
  for(int num : arr){
    if(num >= 1 && num <= 9){
      sorted_arr.push_back(num);
    }
  }
  sort(sorted_arr.begin(), sorted_arr.end());
  
  // Reverse the sorted array and replace each digit by its corresponding name
  reverse(sorted_arr.begin(), sorted_arr.end());
  for(int num : sorted_arr){
    result.push_back(num_to_name[num]);
  }
  
  return result;
}

// Optional: Define the "issame" function
bool issame(vector<string> a, vector<string> b){
  return a == b;
}

int main() {
  // Optional: Remove the assertion with "issame" or define the function
  assert(by_length({9, 4, 8}) == vector<string>{"Nine", "Eight", "Four"});

  return 0;
}