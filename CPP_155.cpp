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
	int even = 0, odd = 0;
	int digit;
	while (num > 0)
	{
		digit = num % 10;
		if (digit % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		num = num / 10;
	}
	vector<int> result{even, odd};
	return result;
}
int main()
{
	int num;
	scanf("%d", &num);
	vector<int> result = even_odd_count(num);
	printf("The number of even digits is %d\n", result[0]);
	printf("The number of odd digits is %d\n", result[1]);
	return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
