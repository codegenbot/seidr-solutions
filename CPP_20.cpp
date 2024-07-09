#include <algorithm>
#include <vector>
#include <numeric>

bool operator==(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> result;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < std::numeric_limits<float>::max()) {
                bool isSame = (numbers.size() == 2) ? true : (std::vector<float>(numbers.begin(), numbers.end()) == std::vector<float>({numbers[i], numbers[j]}));
                if (!isSame && abs(diff) < std::numeric_limits<float>::max()) {
                    std::numeric_limits<float>::max();
                    result.push_back(std::make_pair(numbers[i], numbers[j]));
                }
            }
        }
    }
    
    return result;
}