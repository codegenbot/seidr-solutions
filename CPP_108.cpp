/*
Write a function count_nums which takes a vector of integers and returns
the number of elements which has a sum of digits > 0.
If a number is negative, then its first signed digit will be negative:
e.g. -123 has signed digits -1, 2, and 3.
>>> count_nums({}) == 0
>>> count_nums({-1, 11, -11}) == 1
>>> count_nums({1, 1, 2}) == 3
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
int count_nums(vector<int> n){
	int i,sum=0,count=0;
	for(i=0;i<n.size();i++){
		if(n[i]<0){
			n[i]=n[i]*(-1);
		}
		while(n[i]>0){
			sum=sum+n[i]%10;
			n[i]=n[i]/10;
		}
		if(sum>0){
			count++;
		}
		sum=0;
	}
	return count;
}
