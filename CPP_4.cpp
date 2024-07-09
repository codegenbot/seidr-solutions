#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(float x : numbers) {
        sum += abs(x - (sum + 0.0)/numbers.size());
    }
    return sum / numbers.size();
}