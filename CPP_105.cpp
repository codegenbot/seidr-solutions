/*
Given a vector of integers, sort the integers that are between 1 and 9 inclusive,
reverse the resulting vector, and then replace each digit by its corresponding name from
"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine".

For example:
  arr = {2, 1, 1, 4, 5, 8, 2, 3}   
        -> sort arr -> {1, 1, 2, 2, 3, 4, 5, 8} 
        -> reverse arr -> {8, 5, 4, 3, 2, 2, 1, 1}
  return {"Eight", "Five", "Four", "Three", "Two", "Two", "One", "One"}

  If the vector is empty, return an empty vector:
  arr = {}
  return {}

  If the vector has any strange number ignore it:
  arr = {1, -1 , 55} 
        -> sort arr -> {-1, 1, 55}
        -> reverse arr -> {55, 1, -1}
  return = {"One"}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
vector<string> by_length(vector<int> arr){
  vector<string> result;
  map<int, string> m;
  m[1] = "One";
  m[2] = "Two";
  m[3] = "Three";
  m[4] = "Four";
  m[5] = "Five";
  m[6] = "Six";
  m[7] = "Seven";
  m[8] = "Eight";
  m[9] = "Nine";
  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] >= 1 && arr[i] <= 9){
      result.push_back(m[arr[i]]);
    }
  }
  return result;
}
