/*
Given a non-empty vector of integers arr and an integer k, return
the sum of the elements with at most two digits from the first k elements of arr.

Example:

    Input: arr = {111,21,3,4000,5,6,7,8,9}, k = 4
    Output: 24 # sum of 21 + 3

Constraints:
    1. 1 <= len(arr) <= 100
    2. 1 <= k <= len(arr)
*/
#include<stdio.h>
#include<vector>
	int i,sum=0;
	for(i=0;i<k;i++){
		if(arr[i]<10||arr[i]>99){
			sum=sum+arr[i];
		}
	}
	return sum;
}
int main(){
	int n,i,k,sum;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the number of elements to be summed: ");
	scanf("%d",&k);
	vector<int> arr(n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sum=add_elements(arr,k);
	printf("The sum of elements with atmost 2 digits is: %d",sum);
}
using namespace std;
int add_elements(vector<int> arr,int k){
