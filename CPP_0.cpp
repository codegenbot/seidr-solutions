#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    for (int i = 1; i < sorted_numbers.size(); ++i) {
        if (abs(sorted_numbers[i] - sorted_numbers[i - 1]) < threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.5f) == true);
    assert(has_close_elements(a, 0.1f) == false);

    return 0;
}