#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::pair<float, float> p1, std::pair<float, float> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

std::pair<float, float> find_closest_pair(const std::vector<float>& numbers) {
    if(numbers.size() <= 1)
        return {numbers[0], numbers[0]};

    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if(diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return closest_pair;
}

int main() {
    std::vector<float> numbers = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    std::pair<float, float> closest_pair = find_closest_pair(numbers);
    std::cout << "(" << closest_pair.first << ", " << closest_pair.second << ")" << std::endl;
    return 0;
}