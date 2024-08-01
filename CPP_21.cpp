#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    
    // Find the minimum and maximum values in the input vector
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    // Apply the linear transform to each element in the input vector
    for (float num : numbers) {
        result.push_back((num - min_val) / (max_val - min_val));
    }
    
    return result;
}