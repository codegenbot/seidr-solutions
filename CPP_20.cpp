#include <vector>
#include <algorithm>
#include <cassert>

bool issame(pair<float, float> a, pair<float, float> b) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float min_num1 = numbers[0];
    float min_num2 = numbers[1];

    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            min_num1 = numbers[i];
            min_num2 = numbers[i + 1];
        }
    }

    return make_pair(min_num1, min_num2);
}

assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), make_pair(2.2, 3.1));