#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cfloat>

using namespace std;

// Function to check if two vectors are the same
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > FLT_EPSILON) return false;
    }
    return true;
}

// Function to find the closest elements in a vector
vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    vector<float> result(2);

    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = fabs(numbers[i] - numbers[i - 1]);
        if (diff < min_diff) {
            min_diff = diff;
            result[0] = numbers[i - 1];
            result[1] = numbers[i];
        }
    }
    return result;
}

// Main function to test the functionality
int main() {
    // Testing the find_closest_elements function
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1}));
    cout << "Test passed!" << endl;

    return 0;
}