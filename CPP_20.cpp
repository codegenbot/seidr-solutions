#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    int idx1 = 0, idx2 = 1;

    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            idx1 = i;
            idx2 = i + 1;
        }
    }

    return {numbers[idx1], numbers[idx2]};
}

int main() {
    std::vector<float> test_case = {3.5, 8.2, 1.6, 5.3, 9.8};
    std::vector<float> result = find_closest_elements(test_case);

    if (issame(result, {5.3, 8.2})) {
        std::cout << "Test case passed." << std::endl;
    } else {
        std::cout << "Test case failed." << std::endl;
    }

    return 0;
}