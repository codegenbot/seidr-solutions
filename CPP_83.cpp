/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	int result;
	if(n<2){
		return n;
	}
	else{
		return starts_one_ends(n-1)+9*(n-1)*pow(10,n-2);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<starts_one_ends(n)<<endl;
	return 0;
}
