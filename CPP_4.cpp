#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - (sum / (i + 1)));
    }
    return sum / numbers.size();
}