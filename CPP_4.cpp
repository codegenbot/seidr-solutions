#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    float mean = 0;
    
    for (auto num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    sum = 0;
    
    for (auto num : numbers) {
        sum += abs(num - mean);
    }
    
    return sum / numbers.size();
}