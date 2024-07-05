#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> find_closest_elements(const vector<float>& numbers) {
    vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = fabs(sorted_numbers[1] - sorted_numbers[0]);
    pair<float, float> closest_pair = {sorted_numbers[0], sorted_numbers[1]};
    
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        float diff = fabs(sorted_numbers[i + 1] - sorted_numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {sorted_numbers[i], sorted_numbers[i + 1]};
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == vector<float>{2.2, 3.1});
    cout << "Test passed!" << endl;
    return 0;
}