#include <vector>

vector<float> rescale_to_unit(vector<float> numbers) {
    float maximum = 0;
    for (float num : numbers) {
        if (num > maximum) {
            maximum = num;
        }
    }
    vector<float> rescaled;
    for (float num : numbers) {
        rescaled.push_back(num / maximum);
    }
    return rescaled;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}