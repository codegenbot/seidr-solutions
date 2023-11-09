/*
From a given vector of integers, generate a vector of rolling maximum element found until given moment
in the sequence.
>>> rolling_max({1, 2, 3, 2, 3, 4, 2})
{1, 2, 3, 3, 3, 4, 4}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> rolling_max(vector<int> numbers){
	vector<int> result;
	int max = numbers[0];
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
		result.push_back(max);
	}
	return result;
}
