#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    for (float num : numbers) {
        if (mean == 0) {
            mean = num;
        } else {
            sum += abs(num - mean);
        }
    }
    return sum / numbers.size();
}