#include <vector>
#include <cmath>

using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float mean = 0;
    for (auto num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float mad = 0;
    for (auto num : numbers) {
        mad += abs(num - mean);
    }
    mad /= numbers.size();
    return mad;
}