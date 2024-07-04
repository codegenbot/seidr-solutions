#include <vector>
#include <algorithm>
#include <cfloat>
#include <cassert>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    vector<float> result(2);
    
    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            result[0] = numbers[i - 1];
            result[1] = numbers[i];
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}