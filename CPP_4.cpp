/*
For a given vector of input numbers, calculate Mean Absolute Deviation
around the mean of this dataset.
Mean Absolute Deviation is the average absolute difference between each
element and a centerpoint (mean in this case):
MAD = average | x - x_mean |
>>> mean_absolute_deviation({1.0, 2.0, 3.0, 4.0})
1.0
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
float mean_absolute_deviation(vector<float> numbers){
float sum = 0;
float mean = 0;
float MAD = 0;
for(int i = 0; i < numbers.size(); i++){
	sum = sum + numbers[i];
}
mean = sum / numbers.size();
for(int i = 0; i < numbers.size(); i++){
	MAD = MAD + fabs(numbers[i] - mean);
}
MAD = MAD / numbers.size();
return MAD;
}
