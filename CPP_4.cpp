#include <vector>
#include <cmath>

using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float mean = 0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float sum = 0;
    for (float num : numbers) {
        sum += abs(num - mean);
    }

    return sum / numbers.size();
}