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
  map<int, string> num_name = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
  vector<string> result;
  if(arr.size() == 0){
    return result;
  }
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] >= 1 && arr[i] <= 9){
      result.push_back(num_name[arr[i]]);
    }
  }
  sort(result.begin(), result.end());
  reverse(result.begin(), result.end());
  return result;
}
int main(){
  vector<int> arr1 = {2, 1, 1, 4, 5, 8, 2, 3};
  vector<int> arr2 = {};
  vector<int> arr3 = {1, -1 , 55};
  vector<string> res1 = by_length(arr1);
  vector<string> res2 = by_length(arr2);
  vector<string> res3 = by_length(arr3);
  for(int i = 0; i < res1.size(); i++){
    printf("%s ", res1[i].c_str());
  }
  printf("\n");
  for(int i = 0; i < res2.size(); i++){
    printf("%s ", res2[i].c_str());
  }
  printf("\n");
  for(int i = 0; i < res3.size(); i++){
    printf("%s ", res3[i].c_str());
  }
  printf("\n");
  return 0;
}
