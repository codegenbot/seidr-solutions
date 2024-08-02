#include <cmath>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

double mean_absolute_deviation(const initializer_list<double>& numbers) {
    vector<double> nums(numbers);
    double sum = accumulate(nums.begin(), nums.end(), 0.0);
    double mean = sum / nums.size();
    
    double deviation_sum = 0;
    for (double num : nums) {
        deviation_sum += abs(num - mean);
    }
    return deviation_sum / nums.size();
}

int main() {
    assert(abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}