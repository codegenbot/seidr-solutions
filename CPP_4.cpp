#include <vector>
#include <cmath>

using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    float avg = 0;
    
    for (float num : numbers) {
        sum += abs(num - avg);
    }
    
    avg = sum / numbers.size();
    
    return avg;
}