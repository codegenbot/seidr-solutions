#include <vector>
#include <cmath>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (abs(a[i]-b[i]) > 1e-4) return false;
    }
    return true;
}

vector<float> get_positive(const vector<float>& vec) {
    vector<float> positive_values;
    for (const auto& val : vec) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }
    
    return positive_values;
}