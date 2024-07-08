```cpp
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool areEqual(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2] = {0};

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}

int main() {
    vector<float> nums = {1.1, 2.2, 3.1, 4.1, 5.1};
    assert(areEqual(find_closest_elements(nums), (vector<float>) {2.2, 3.1}));
    return 0;
}