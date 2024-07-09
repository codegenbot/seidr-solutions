#include <initializer_list>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    auto closest_pair = std::make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (issame({numbers[i], numbers[j]}, {closest_pair.first, closest_pair.second})) {
                std::pair<float, float> tempPair;
                if(numbers[i] <= numbers[j]) {
                    tempPair.first = numbers[i];
                    tempPair.second = numbers[j];
                }
                else {
                    tempPair.first = numbers[j];
                    tempPair.second = numbers[i];
                }

                if (std::abs(tempPair.first - tempPair.second) < std::abs(closest_pair.first - closest_pair.second)) {
                    closest_pair = tempPair;
                }
            }
        }
    }

    return closest_pair;
}