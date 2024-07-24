#include <vector>
using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0; 
    float mean = 0.0; 
    int n = numbers.size();

    for (int i = 0; i < n; i++) {
        mean += numbers[i];
    }
    mean /= n;

    for (int i = 0; i < n; i++) {
        sum += abs(numbers[i] - mean);
    }

    return sum / n;
}