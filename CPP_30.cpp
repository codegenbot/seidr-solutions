#include <vector>
#include <cassert>

using namespace std;

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

int main2() {
    vector<float> input = {-1.5, 2.3, -3.7, 4.5, -5.2};
    vector<float> result = get_positive(input);

    assert(result.size() == 2);
    assert(result[0] == 2.3);
    assert(result[1] == 4.5);

    assert(issame(get_positive(vector<float>{}), vector<float>{}));

    return 0;
}