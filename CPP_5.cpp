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
	vector<int> result;
	result.push_back(numbers[0]);
	for(int i=1; i<numbers.size(); i++){
		result.push_back(delimeter);
		result.push_back(numbers[i]);
	}
	return result;
}
