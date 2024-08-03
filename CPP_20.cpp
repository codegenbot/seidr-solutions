#include <vector>
#include <utility>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if(numbers.size() < 2) {
        return std::make_pair(0.0f, 0.0f);
    }
    
    std::vector<float> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    float min_diff = sortedNumbers[1] - sortedNumbers[0];
    int min_index1 = 0;
    int min_index2 = 1;

    for(int i = 1; i < sortedNumbers.size() - 1; ++i) {
        if(sortedNumbers[i + 1] - sortedNumbers[i] < min_diff) {
            min_diff = sortedNumbers[i + 1] - sortedNumbers[i];
            min_index1 = i;
            min_index2 = i + 1;
        }
    }

    return std::make_pair(sortedNumbers[min_index1], sortedNumbers[min_index2]);
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 5.8, 2.6, 4.1};
    std::pair<float, float> result = find_closest_elements(numbers);
    std::cout << "Closest elements are: " << result.first << " and " << result.second << std::endl;
    return 0;
}