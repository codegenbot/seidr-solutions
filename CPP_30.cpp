#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] != b[i]) && (a[i] > 0 || b[i] > 0)) {
            return false;
        }
    }
    return true;
}

float get_positive(std::vector<float> l) {
    float sum = 0.0f;
    for (float x : l) {
        if (x > 0) {
            sum += x;
        }
    }
    return sum;
}

int main() {
    std::vector<float> v;
    int n;
    cin >> n;
    v.resize(n);
    for (auto &num : v) {
        cin >> num;
    }
    
    if (issame(v, {1.0f}) && get_positive(v) > 0.0f) {
        cout << get_positive(v) << endl;
    } else {
        cout << "Not Positive!" << endl;
    }

    return 0;
}