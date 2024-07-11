#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

float mean(vector<float> numbers) {
    return static_cast<float>(accumulate(numbers.begin(), numbers.end(), 0.0)) / numbers.size();
}

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    for (auto num : numbers) {
        sum += abs(num - mean(numbers));
    }
    return sum / numbers.size();
}