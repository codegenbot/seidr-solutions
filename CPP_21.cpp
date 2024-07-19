#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    for (float& num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
    
    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> input = {3.0, 6.0, 9.0, 12.0};
    vector<float> expected_output = {0.0, 0.333333, 0.666667, 1.0};
    
    assert(issame(rescale_to_unit(input), expected_output));
    
    return 0;
}