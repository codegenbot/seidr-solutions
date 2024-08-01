#include <algorithm>
#include <vector>
#include <numeric>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (std::abs(v1[i] - v2[i]) > 1e-9f) return false;
    }
    return true;
}

int main() {
    std::vector<float> numbers;
    // Your code to read input from user and store it in the 'numbers' vector
    // For example:
    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    vector<float> result = find_closest_elements(numbers);

    // Your code to print the output
    // For example:
    std::cout << "Closest elements: ";
    for (float x : result) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    float closest1 = 0;
    float closest2 = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest1 = numbers[i];
                closest2 = numbers[j];
            }
        }
    }

    vector<float> result({closest1, closest2});
    return result;
}