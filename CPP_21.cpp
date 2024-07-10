#include <vector>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    
    if (numbers.size() > 0) {
        float minVal = *min_element(numbers.begin(), numbers.end());
        float maxVal = *max_element(numbers.begin(), numbers.end());

        for (float num : numbers) {
            result.push_back((num - minVal) / (maxVal - minVal));
        }
    } else {
        // handle the case when input vector is empty
    }

    return result;
}