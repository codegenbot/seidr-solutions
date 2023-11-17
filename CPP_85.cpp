/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
int sum = 0;
for(unsigned int i = 0; i < lst.size(); i ++){
    if(i%2==0){
	    if(lst[i]%2==0){
		sum = sum + lst[i];
		}
		}
	}
	return sum;
}

int main(void )
{
    vector<int>input = {4,2,12};
    printf("%d",add(input));
}
using namespace std;
int add(vector<int> lst){
