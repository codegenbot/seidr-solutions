#include <cassert>

namespace mean_absolute_deviation {
    float calculate_mad(const std::vector<float>& numbers) {
        float sum = 0;
        for (float num : numbers) {
            sum += num;
        }
        float mean = sum / numbers.size();

        float deviation_sum = 0;
        for (float num : numbers) {
            deviation_sum += std::abs(num - mean);
        }
        float mad = deviation_sum / numbers.size();

        return mad;
    }
}