#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
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

    // Input your test cases
    std::vector<float> numbers = {1.0f, 5.0f, 15.0f, 25.0f};
    std::vector<float> result = find_closest_elements(numbers);

    // Print the output
    for (float num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}