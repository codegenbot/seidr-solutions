#include <vector>
#include <numeric>

using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float mean = accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
    float sum = 0;
    for (float num : numbers) {
        sum += abs(num - mean);
    }
    return sum / numbers.size();
}