/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
#include<vector>
	int sum = 0;
	for(int i=0; i<lst.size(); i++){
		if(i%2==0 && lst[i]%2!=0){
			sum += lst[i];
		}
	}
	return sum;
}
using namespace std;
int main(){
	vector<int> v1 = {5, 8, 7, 1};
	vector<int> v2 = {3, 3, 3, 3, 3};
	vector<int> v3 = {30, 13, 24, 321};
	printf("%d\n", solutions(v1));
	printf("%d\n", solutions(v2));
	printf("%d\n", solutions(v3));
}
