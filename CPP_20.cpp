#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

bool issame(float a, float b) {
    return (fabs(a - b) < 0.0001);
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float num1 = numbers[0], num2 = numbers[1];
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        } else if (issame(numbers[i + 1] - numbers[i], min_diff)) {
            if (numbers[i] < num1) {
                num1 = numbers[i];
                num2 = numbers[i + 1];
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