#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) {
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
    vector<float> b = {1.00001, 2.0, 3.0};

    if (issame(a, rescale_to_unit(b))) {
        std::cout << "Vectors are same\n";
    } else {
        std::cout << "Vectors are not same\n";
    }

    return 0;
}