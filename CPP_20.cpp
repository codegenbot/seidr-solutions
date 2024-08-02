#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if two vectors are same
bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

// Function to find the closest pair of elements in a given vector
vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closest = make_pair(numbers[0], numbers[0]);
    float min_diff = abs(numbers[0] - numbers[0]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    result.push_back(closest);
    return result;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {{2.2, 3.1}}));
    return 0;
}