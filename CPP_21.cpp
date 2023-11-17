/*
Given vector of numbers (of at least two elements), apply a linear transform to that vector,
such that the smallest number will become 0 and the largest will become 1
>>> rescale_to_unit({1.0, 2.0, 3.0, 4.0, 5.0})
{0.0, 0.25, 0.5, 0.75, 1.0}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<float> rescale_to_unit(vector<float> numbers){ 
	float max_value = *max_element(numbers.begin(),numbers.end());
	float min_value = *min_element(numbers.begin(),numbers.end());
	vector<float> new_numbers;
	for (int i = 0; i < numbers.size(); i++){
		new_numbers.push_back((numbers[i]-min_value)/(max_value-min_value));
	}
	return new_numbers;
}
