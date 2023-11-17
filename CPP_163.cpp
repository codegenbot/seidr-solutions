/*
Given two positive integers a and b, return the even digits between a
and b, in ascending order.

For example:
generate_integers(2, 8) => {2, 4, 6, 8}
generate_integers(8, 2) => {2, 4, 6, 8}
generate_integers(10, 14) => {}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> generate_integers(int a,int b){
	vector<int> v;
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%2==0){
			v.push_back(i);
		}
	}
	return v;
}
int main(){
	vector<int> v=generate_integers(2,8);
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);
	}
	printf("\n");
	v=generate_integers(8,2);
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);
	}
	printf("\n");
	v=generate_integers(10,14);
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);
	}
	printf("\n");
	return 0;
}
