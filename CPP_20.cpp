#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    std::pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[j] - numbers[i]) < std::abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }

    return {closest_pair};
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    if (issame(find_closest_elements(numbers), {{1.0, 1.0}})) {
        std::cout << "Closest pair is: " << find_closest_elements(numbers)[0].first << ", " << find_closest_elements(numbers)[0].second << std::endl;
    } else {
        std::cout << "No closest pair found." << std::endl;
    }
    return 0;
}