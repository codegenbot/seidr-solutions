#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2];

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}