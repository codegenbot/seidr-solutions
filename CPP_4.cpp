#include <vector>
#include <cmath>

double mean_absolute_deviation(const vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    double mean = sum / numbers.size();

    double deviation_sum = 0;
    for (double num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    return deviation_sum / numbers.size();
}

int main() {
    vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(mean_absolute_deviation(numbers) == 1.2);
    return 0;
}