/*
Implement a function that takes an non-negative integer and returns a vector of the first n
integers that are prime numbers and less than n.
for example:
count_up_to(5) => {2,3}
count_up_to(11) => {2,3,5,7}
count_up_to(0) => {}
count_up_to(20) => {2,3,5,7,11,13,17,19}
count_up_to(1) => {}
count_up_to(18) => {2,3,5,7,11,13,17}
*/
#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;
vector<int> count_up_to(int n){
	vector<int> a;
	if(n<=1)
		return a;
	for(int i=2;i<n;i++){
		int flag=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			a.push_back(i);
	}
	return a;
}
