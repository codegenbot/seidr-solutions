#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    if (numbers.size() < 2) {
        return numbers;
    }

    auto min_val = *min_element(numbers.begin(), numbers.end());
    auto max_val = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_val) / (max_val - min_val));
    }

    return result;
}