#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> result;
    float minDiff = INFINITY;
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                result.clear();
                result.push_back(numbers[i]);
                result.push_back(numbers[j]);
                minDiff = diff;
            }
        }
    }
    return result;
}