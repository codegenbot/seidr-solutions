#include <algorithm>
#include <vector>
#include <iostream>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sortedNumbers = numbers; 
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    for (int i = 0; i < sortedNumbers.size() - 1; ++i) {
        if (std::abs(sortedNumbers[i] - sortedNumbers[i+1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    float threshold = 0.2;
    bool result = has_close_elements(a, threshold);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}