/*
From a supplied vector of numbers (of length at least two) select and return two that are the closest to each
other and return them in order (smaller number, larger number).
>>> find_closest_elements({1.0, 2.0, 3.0, 4.0, 5.0, 2.2})
(2.0, 2.2)
>>> find_closest_elements({1.0, 2.0, 3.0, 4.0, 5.0, 2.0})
(2.0, 2.0)
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> find_closest_elements(vector<float> numbers){
	float min = abs(numbers[0] - numbers[1]);
	float a = numbers[0];
	float b = numbers[1];
	for (int i = 0; i < numbers.size() - 1; i++) {
		if (abs(numbers[i] - numbers[i + 1]) < min) {
			min = abs(numbers[i] - numbers[i + 1]);
			a = numbers[i];
			b = numbers[i + 1];
		}
	}
	if (a < b) {
		return { a, b };
	}
	else {
		return { b, a };
	}
}
