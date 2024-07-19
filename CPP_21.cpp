#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

void rescale_to_unit(vector<float>& numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    for (float& num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> expected = {0.25, 0.0, 1.0, 0.5, 0.75};
    vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    
    rescale_to_unit(input);
    
    assert(issame(input, expected));
    
    return 0;
}