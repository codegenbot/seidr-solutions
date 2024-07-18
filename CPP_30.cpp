#include <vector>

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
    vector<float> input = {-1.5, 2.3, -3.7, 4.5, -5.2};
    vector<float> result = get_positive(input);

    assert(result.size() == 2);
    assert(result[0] == 2.3);
    assert(result[1] == 4.5);

    return 0;
}