#include <vector>
#include <cmath>
using namespace std;

double mean_absolute_deviation(const vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    double mean = sum / numbers.size();

    double deviation_sum = 0;
    for (double num : numbers) {
        deviation_sum += abs(num - mean);
    }
    return deviation_sum / numbers.size();
}

int main() {
    vector<double> numbers = {1.2, 3.4, 5.6, 7.8, 9.0};
    double result = mean_absolute_deviation(numbers);
    return 0;
}