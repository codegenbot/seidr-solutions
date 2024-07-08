#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] != b[i])) {
            return false;
        }
    }
    return true;
}

float get_positive(const vector<float>& l) {
    float sum = 0.0f;
    for (const auto& x : l) {
        if (x > 0) {
            sum += x;
        }
    }
    return sum;
}

int main() {
    assert(issame({1,2,3}, {1,2,3}));
    cout << get_positive({-1,-2,3}) << endl;  
    return 0;
}