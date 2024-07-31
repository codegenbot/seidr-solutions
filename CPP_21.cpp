#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(const vector<float> &numbers);

bool issame(vector<float> a, vector<float> b);

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    return 0;
}

vector<float> rescale_to_unit(const vector<float> &numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    float range = max_num - min_num;

    vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / range;
        result.push_back(scaled_num);
    }

    return result;
}

bool issame(vector<float> a, vector<float> b) {
    // Implement the logic to compare vectors 'a' and 'b' element-wise
    // and return true if they are the same, false otherwise
}