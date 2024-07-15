#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(const std::vector<float>& arr) {
    std::vector<float> closest_elements;

    if (arr.size() < 2) {
        return closest_elements;
    }

    float min_diff = std::abs(arr[1] - arr[0]);

    for (size_t i = 0; i < arr.size() - 1; ++i) {
        float diff = std::abs(arr[i + 1] - arr[i]);

        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {arr[i], arr[i + 1]};
        }
    }

    return closest_elements;
}

std::vector<float> solve_problem() {
    std::vector<float> result = find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f});
    assert(issame(result, {2.2f, 3.1f}));

    return result;
}

int main() {
    std::vector<float> input_arr;

    std::cout << "Enter elements of the array separated by space: ";
    float temp;
    while(std::cin >> temp) {
        input_arr.push_back(temp);
    }

    std::vector<float> closest_elements = solve_problem();

    if (closest_elements.empty()) {
        std::cout << "No closest elements found." << std::endl;
    } else {
        std::cout << "Closest elements: ";
        for (const auto& element : closest_elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}