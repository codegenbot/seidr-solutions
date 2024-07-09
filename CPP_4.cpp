#include <vector>
#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0f;
    for (auto num : numbers) {
        sum += abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(vector<float> numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}

int main() {
    vector<float> numbers = {1, 2, 3, 4};
    float result = mean_absolute_deviation(numbers);
    cout << "Mean Absolute Deviation: " << result << endl;
    return 0;
}