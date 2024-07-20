#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    int left = 0;
    int right = 1;

    for (int i = 2; i < numbers.size(); i++) {
        if (numbers[i] - numbers[left] < min_diff) {
            min_diff = numbers[i] - numbers[left];
            right = i;
        } else if (numbers[right] - numbers[left] > min_diff) {
            left = right;
            right = i;
        }
    }

    return {numbers[left], numbers[right]};
}