#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

void main_func() {
    vector<float> expected = {0.25, 0.0, 1.0, 0.5, 0.75};
    vector<float> result = rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0});

    for (int i = 0; i < expected.size(); ++i) {
        assert(abs(expected[i] - result[i]) < 0.0001);
    }
}

int main() {
    main_func();
    return 0;
}