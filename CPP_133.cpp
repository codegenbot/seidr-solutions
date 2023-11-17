/*
You are given a vector of numbers.
You need to return the sum of squared numbers in the given vector,
round each element in the vector to the upper int(Ceiling) first.
Examples:
For lst = {1,2,3} the output should be 14
For lst = {1,4,9} the output should be 98
For lst = {1,3,5,7} the output should be 84
For lst = {1.4,4.2,0} the output should be 29
For lst = {-2.4,1,1} the output should be 6


*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
int sum_squares(vector<float> lst)
{
	float lst_2;
	int x,y;
	int sum = 0;
	vector <int> lst_ceil;
	for (x=0;x<lst.size();x++)
	{
		lst_2 = ceil(lst[x]);
		lst.push_back(lst_2);
	}
	for (y=0;y<lst_ceil.size();y++)
	{
		sum = sum + pow(lst_ceil[y],2);
	}
	return sum;
}
int main(){
	float lst[3] = {1.8,4.3,3.5};
	sum_squares(lst);
}
