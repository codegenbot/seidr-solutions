/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

odd_sum({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
odd_sum({-1, -2, 0}) == 0
odd_sum({9, -2}) == 81
odd_sum({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cassert>
using namespace std;
long long odd_sum(vector<float> lst)
{
	long long sum = 0;
	for(int i = 0; i < lst.size(); i++)
	{
		if(lst[i] > 0 && floor(lst[i]) == lst[i])
		{
			if(fmod(lst[i], 2) != 0)
			{
				sum += pow(lst[i], 2);
			}
		}
	}
	return sum;
}

int main()
{
    vector<float> lst = {1, 3, 2, 0};
    long long odd_sum = 10;
    assert (odd_sum(lst) == odd_sum );

    vector<float> lst = {-1, -2, 0};
    long long odd_sum = 0;
    assert (odd_sum(lst) == odd_sum );

    vector<float> lst = {9, -2};
    long long odd_sum = 81;
    assert (odd_sum(lst) == odd_sum );

    vector<float> lst = {0};
    long long odd_sum = 0;
    assert (odd_sum(lst) == odd_sum );
}
