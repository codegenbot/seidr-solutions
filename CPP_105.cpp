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
  if(arr.size() == 0) return result;
  map<int, string> dict;
  dict[1] = "One";
  dict[2] = "Two";
  dict[3] = "Three";
  dict[4] = "Four";
  dict[5] = "Five";
  dict[6] = "Six";
  dict[7] = "Seven";
  dict[8] = "Eight";
  dict[9] = "Nine";
  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] >= 1 && arr[i] <= 9){
      result.push_back(dict[arr[i]]);
    }
  }
  return result;
}

int main(){
  vector<int> arr = {2, 1, 1, 4, 5, 8, 2, 3};
  vector<string> res = by_length(arr);
  for(string str:res){
    cout<<str<<" ";
  }
  cout<<endl;
  return 0;
}
