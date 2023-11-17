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
	int l=numbers.size();
	float min=abs(numbers[1]-numbers[0]);
	int i,j;
	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			if(abs(numbers[i]-numbers[j])<min){
				min=abs(numbers[i]-numbers[j]);
			}
		}
	}
	vector<float> v(min);
	return v;
}
