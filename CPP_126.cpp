/*
Given a vector of numbers, return whether or not they are sorted
in ascending order. If vector has more than 1 duplicate of the same
number, return false. Assume no negative numbers and only integers.

Examples
is_sorted({5}) ➞ true
is_sorted({1, 2, 3, 4, 5}) ➞ true
is_sorted({1, 3, 2, 4, 5}) ➞ false
is_sorted({1, 2, 3, 4, 5, 6}) ➞ true
is_sorted({1, 2, 3, 4, 5, 6, 7}) ➞ true
is_sorted({1, 3, 2, 4, 5, 6, 7}) ➞ false
is_sorted({1, 2, 2, 3, 3, 4}) ➞ true
is_sorted({1, 2, 2, 2, 3, 4}) ➞ false
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
bool is_sorted(vector<int> lst){
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	for(i=0;i<lst.size();i++){
		for(j=i+1;j<lst.size();j++){
			if(lst[i]==lst[j]){
				return false;
			}
		}
	}
	for(i=0;i<lst.size();i++){
		for(j=i+1;j<lst.size();j++){
			if(lst[i]>lst[j]){
				return false;
			}
		}
	}
	return true;
}
int main(){
	vector<int> lst;
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&l);
		lst.push_back(l);
	}
	if(is_sorted(lst)){
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
}
