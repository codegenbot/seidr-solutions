/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/

#include<stdio.h>
#include<math.h>
#include<vector>
#include<cassert>
using namespace std;
long long double_the_difference(vector<float> lst){
	long long sum=0;
	for(int i=0;i<lst.size();i++)
	{
		if(lst[i]>=0 && (int)lst[i]==lst[i])
		{
			if((int)lst[i]%2!=0)
				sum+=(int)pow(lst[i],2);
		}
	}
	return sum;
}
int main()
{
    vector<float> lst = {1, 3, 2, 0};
    long long odd_sum = 10;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1, -2, 0};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {9, -2};
    odd_sum = 81;
    assert (double_the_difference(lst) == odd_sum );

    lst = {0};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    odd_sum = 165;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    odd_sum = 165;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    odd_sum = 165;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    odd_sum = 231;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    odd_sum = 231;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    odd_sum = 308;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    odd_sum = 308;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    odd_sum = 396;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    odd_sum = 396;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    odd_sum = 495;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    odd_sum = 495;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    odd_sum = 605;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    odd_sum = 605;
    assert (double_the_difference(lst) == odd_sum );

}
