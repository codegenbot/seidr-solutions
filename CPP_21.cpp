#include <vector>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    vector<float> result;
    auto minVal = *min_element(numbers.begin(), numbers.end());
    auto maxVal = *max_element(numbers.begin(), numbers.end());

    for (float num : numbers) {
        float scaledNum = (num - minVal) / (maxVal - minVal);
        result.push_back(scaledNum);
    }
    
    return result;
}