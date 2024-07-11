#include <vector>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(vector<float> numbers) {
    using namespace std;
    return accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}