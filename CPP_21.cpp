#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_val) / (max_val - min_val));
    }
    return result;
}