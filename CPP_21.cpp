```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
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
    vector<float> numbers1 = {1.0, 2.0, 3.0};
    vector<float> numbers2 = {1.0, 2.0, 3.0};

    if (issame(numbers1, numbers2)) {
        for (float num : rescale_to_unit(numbers1)) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Vectors are not same" << endl;
    }

    return 0;
}