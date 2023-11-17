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
	vector<int> result(2, 0);
	while (num != 0) {
		if ((num % 10) % 2 == 0) {
			result[0]++;
		}
		else {
			result[1]++;
		}
		num /= 10;
	}
	return result;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	vector<int> result = even_odd_count(num);
	printf("Number of even digits: %d\n", result[0]);
	printf("Number of odd digits: %d\n", result[1]);
	return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
