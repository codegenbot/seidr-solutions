#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        throw runtime_error("Vector must have at least two elements");
    }
    
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(max(numbers[i], numbers[j]), min_diff), max(min(numbers[i], numbers[j]), min_diff));
            }
        }
    }
    
    vector<float> result(2);
    result[0] = closest_pair.first;
    result[1] = closest_pair.second;
    return result;
}

int main() {
    assert(issame({2.2f, 3.1f}, find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f})));
    return 0;
}