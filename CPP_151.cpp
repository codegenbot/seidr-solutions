/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
long long double_the_difference(vector<long long>& lst){
	long long nosum=0,nosum2=0,sum;
	for(int i=0;i<lst.size();i++){
		if(lst[i]<0 ||lst[i]!=floor(lst[i])){
			nosum+=lst[i];
		}
	}
	for(int i=0;i<lst.size();i++){
		if(lst[i]>0 && lst[i]==floor(lst[i])){
				if(lst[i]%2!=0){
				nosum2+=pow(lst[i],2);
			}
		}
	}
	sum=nosum+nosum2;
	return sum;
}
