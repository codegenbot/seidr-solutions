#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers);
bool issame(vector<float> a, vector<float> b);

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 4.0, 8.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    vector<float> expected_result = {0.0, 0.142857, 0.428571, 1.0};
    assert(issame(rescaled_numbers, expected_result));

    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    std::cout << "All tests passed." << std::endl;

    return 0;
}