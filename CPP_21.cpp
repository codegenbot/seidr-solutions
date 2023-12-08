#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm> // This header file provides access to min_element and max_element functions
using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min = *min_element(numbers.begin(), numbers.end());
    float max = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back((numbers[i] - min) / (max - min));
    }
    return result;
}