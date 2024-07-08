#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

bool issame(pair<pair<float, float>, pair<float, float>> p1, pair<pair<float, float>, pair<float, float>> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

vector<pair<float, float>> find_closest_elements(const vector<float>& numbers) {
    if(numbers.size() <= 1)
        return {};

    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            if(diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return {{closest_pair.first, closest_pair.second}};
}

int main() {
    assert(issame({{2.2, 3.1}}, find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1})));
    return 0;
}