#include<iomanip>
#include<vector>
using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_value = *min_element(numbers.begin(), numbers.end());
    float max_value = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_value) / (max_value - min_value));
    }

    return result;
}