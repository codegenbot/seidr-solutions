#include <vector>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
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