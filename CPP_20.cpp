#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    pair<float, float> closestPair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }

    return vector<float>(closestPair.begin(), closestPair.end());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    if (issame(numbers, {numbers[0], numbers.back()})) {
        std::cout << "The vector is symmetric.\n";
    } else {
        std::vector<float> closest = find_closest_elements(numbers);
        std::cout << "The closest pair of elements are: ";
        for (float num : closest) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}