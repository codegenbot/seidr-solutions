/*
Everyone knows Fibonacci sequence, it was studied deeply by mathematicians in 
the last couple centuries. However, what people don't know is Tribonacci sequence.
Tribonacci sequence is defined by the recurrence:
tri(1) = 3
tri(n) = 1 + n / 2, if n is even.
tri(n) =  tri(n - 1) + tri(n - 2) + tri(n + 1), if n is odd.
For example:
tri(2) = 1 + (2 / 2) = 2
tri(4) = 3
tri(3) = tri(2) + tri(1) + tri(4)
       = 2 + 3 + 3 = 8 
You are given a non-negative integer number n, you have to a return a vector of the 
first n + 1 numbers of the Tribonacci sequence.
Examples:
tri(3) = {1, 3, 2, 8}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> tri(int n){
	vector<int> res;
	res.push_back(1);
	res.push_back(3);
	res.push_back(2);
	if(n == 0)
		return vector<int>();
	if(n == 1)
		return vector<int>{1};
	if(n == 2)
		return vector<int>{1, 3};
	if(n == 3)
		return vector<int>{1, 3, 2};
	for(int i = 4; i < n + 1; i++){
		if(i % 2 == 0)
			res.push_back(1 + i / 2);
		else
			res.push_back(res[i - 1] + res[i - 2] + res[i - 3]);
	}
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	vector<int> res = tri(n);
	for(int i = 0; i < res.size(); i++)
		printf("%d ",res[i]);
	return 0;
}
