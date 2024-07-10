#include <vector>

bool issame(vector<float> a, vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool check_positive(vector<float> l) {
    for (float num : l) {
        if (num <= 0) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {})); // Check the output with empty input
    vector<float> test = {1.0, -2.0, 3.0};
    assert(check_positive(test));
    
    return 0;
}