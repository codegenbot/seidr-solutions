```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - minVal) / (maxVal - minVal));
    }
    return result;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.0};
    vector<float> b = {1.0, 2.0, 3.0};
    if (issame(a, b)) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are not the same." << endl;
    }

    vector<float> c = {1.0, 2.0, 4.0};
    vector<float> d = {1.0 / sqrt(16), 2.0 / sqrt(16), 4.0 / sqrt(16)};
    if (issame(c, d)) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are not the same." << endl;
    }

    vector<float> numbers = {1.0, 2.0, 3.0};
    vector<float> result = rescale_to_unit(numbers);
    for (float num : result) {
        cout << num << " ";
    }
    return 0;
}