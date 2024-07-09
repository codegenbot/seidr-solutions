#include <vector>
using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());

    for (float num : numbers) {
        float val = (num - min_val) / (max_val - min_val);
        result.push_back(val);
    }
    return result;
}