/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include <stdio.h>
#include <math.h>
#include <vector>
#include <cassert>
#include <iostream>
using namespace std;

void TestWithEmptyVector() {
    vector<float> numbers {};
    const long long expected = 0;
    const auto actual = double_the_difference(numbers);
    assert(expected == actual);
}

void TestWithOneElementTrue() {
    vector<float> numbers {9};
    const long long expected = 81;
    const auto actual = double_the_difference(numbers);
    assert(expected == actual);
}

void TestWithOneElementFalse() {
    vector<float> numbers {10};
    const long long expected = 0;
    const auto actual = double_the_difference(numbers);
    assert(expected == actual);
}

void TestWith1() {
    vector<float> numbers {1, 3, 2, 0};
    const long long expected = 10;
    const auto actual = double_the_difference(numbers);
    assert(expected == actual);
}

void TestWithPositiveElements() {
    vector<float> numbers {9, 3, 11, 2, 0, 87, 12};
    const long long expected = 174;
    const auto actual = double_the_difference(numbers);
    assert(expected == actual);
}

void TestWithNegativeNotIntegerElements() {
    vector<float> numbers {-3.14, 1.41, 6};
    const long long expected = 96.57;
    const auto actual = double_the_difference(numbers);
    assert(expected == actual);
}

long long double_the_difference(vector<float> lst){
	long long sum=0;
	for(int i=0;i<lst.size();i++)
	{
		if(lst[i]>=0)
		{
			if(lst[i]==(int)lst[i])
			{
				if(lst[i]%2!=0)
				{
					sum=sum+pow(lst[i],2);
				}
			}
		}
	}
	return sum;
}
