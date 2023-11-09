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
	vector<string> ans;
	if(arr.size()==0) return ans;
	vector<int> temp;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>0&&arr[i]<10)
			temp.push_back(arr[i]);
	}
	sort(temp.begin(),temp.end());
	reverse(temp.begin(),temp.end());
	map<int,string> mp;
	mp[1]="One";
	mp[2]="Two";
	mp[3]="Three";
	mp[4]="Four";
	mp[5]="Five";
	mp[6]="Six";
	mp[7]="Seven";
	mp[8]="Eight";
	mp[9]="Nine";
	for(int i=0;i<temp.size();i++){
		ans.push_back(mp[temp[i]]);
	}
	return ans;
}
