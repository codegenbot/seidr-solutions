#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

bool issame(float a, float b) {
    return (fabs(a - b) < 0.0001);
}

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    float num1 = sorted_numbers[0], num2 = sorted_numbers[1];
    for (int i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            num1 = sorted_numbers[i];
            num2 = sorted_numbers[i + 1];
        } else if (issame(sorted_numbers[i + 1] - sorted_numbers[i], min_diff)) {
            if (sorted_numbers[i] < num1) {
                num1 = sorted_numbers[i];
                num2 = sorted_numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}).first, 2.2));
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}).second, 3.1));
    
    return 0;
}