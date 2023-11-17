/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
	int i=0,j=0;
	vector<int> v;
	if(num<0){
		num=num*-1;
	}
	while(num!=0){
		if(num%2==0){
			i++;
		}
		else{
			j++;
		}
		num=num/10;
	}
	v.push_back(i);
	v.push_back(j);
	return v;
}
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	vector<int> v=even_odd_count(num);
	printf("{%d,%d}",v[0],v[1]);
}
using namespace std;
vector<int> even_odd_count(int num){
