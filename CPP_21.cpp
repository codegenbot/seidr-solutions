#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    float range = maxVal - minVal;
    if (range == 0) {
        for (float num : numbers) {
            result.push_back(num);
        }
    } else {
        for (float num : numbers) {
            result.push_back((num - minVal) / range);
        }
    }

    return result;
}