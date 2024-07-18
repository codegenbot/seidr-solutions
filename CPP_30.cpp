#include <vector>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> get_positive(const vector<float>& l) {
    vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

int main() {
    vector<float> l = {-2.5, 3.0, -1.2, 5.4, 0.0};
    vector<float> result = get_positive(l);
    assert(result.size() == 2 && result[0] == 3.0 && result[1] == 5.4);
    assert(issame(get_positive({}), vector<float>{}));
}