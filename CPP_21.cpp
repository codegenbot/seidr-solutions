#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    for (float num : numbers) {
        if(maxVal == minVal)  
            result.push_back(0);
        else
            result.push_back((num - minVal) / (maxVal - minVal));
    }

    return result;
}