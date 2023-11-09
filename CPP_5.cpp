/*
Insert a number "delimeter" between every two consecutive elements of input vector `numbers"
>>> intersperse({}, 4)
{}
>>> intersperse({1, 2, 3}, 4)
{1, 4, 2, 4, 3}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> intersperse(vector<int> numbers, int delimeter){ 
	for (int i = 0; i < numbers.size(); i++) {
		numbers.insert(numbers.begin() + i, delimeter);
		i++;
	}
	return numbers;
}
