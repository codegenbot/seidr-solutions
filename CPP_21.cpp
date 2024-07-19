#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    
    if (numbers.size() >= 2) {
        float min_val = *min_element(numbers.begin(), numbers.end());
        float max_val = *max_element(numbers.begin(), numbers.end());
        
        for (float num : numbers) {
            result.push_back((num - min_val) / (max_val - min_val));
        }
    } else {
        result = numbers;
    }
    
    return result;
}