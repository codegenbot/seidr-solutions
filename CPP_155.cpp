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
	int even=0;
	int odd=0;
	vector<int>ans;
	while(num!=0){
		int temp=num%10;
		if(temp%2==0){
			even++;
		}
		else{
			odd++;
		}
		num=num/10;
	}
	ans.push_back(even);
	ans.push_back(odd);
	return ans;
}
int main(){
	int num;
	scanf("%d",&num);
	vector<int>ans=even_odd_count(num);
	for(int i=0;i<ans.size();i++){
		printf("%d ",ans[i]);
	}
	printf("\n");
	return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
