#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    float mean = 0;

    for (float num : numbers) {
        if (mean == 0)
            mean = num;
        else
            mean = (mean + num) / 2;
    }

    for (float num : numbers) {
        sum += std::abs(num - mean);
    }

    return static_cast<float>(sum) / numbers.size();
}