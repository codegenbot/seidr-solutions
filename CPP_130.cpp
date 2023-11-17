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
	vector<int> result(n+1);
	result[0] = 1;
	result[1] = 3;
	result[2] = 2;
	for (int i = 3; i <= n; i++) {
		if (i % 2 == 0) {
			result[i] = result[i - 1] + result[i - 2] + result[i + 1];
		}
		else {
			result[i] = 1 + i / 2;
		}
	}
	return result;
}
int main() {
	for (int i = 0; i < 10; i++) {
		vector<int> result = tri(i);
		for (int i = 0; i < result.size(); i++) {
			printf("%d ", result[i]);
		}
		printf("\n");
	}
	return 0;
}
