#include <cmath>

auto calculate_mean_absolute_deviation(const std::vector<float>& numbers){
    auto sum = 0.0;
    auto mean = 0.0;
    
    for (auto num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    auto total_diff = 0.0;
    
    for (auto num : numbers) {
        total_diff += std::abs(num - mean);
    }
    
    return total_diff / numbers.size();
}