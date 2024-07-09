#include <numeric>
using namespace std;

float mean_absolute_deviation(vector<float> numbers){
    float mean_value = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - mean_value);
    }
    return sum / numbers.size();
}