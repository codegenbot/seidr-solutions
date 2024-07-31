#include <vector>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {3.0, -2.0, 5.0, 0.0, 1.0};
    vector<float> positive_numbers = get_positive(numbers);
    
    assert(issame(get_positive({}), {}));
    
    return 0;
}