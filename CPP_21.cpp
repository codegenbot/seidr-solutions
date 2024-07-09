#include <vector>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    if (numbers.size() < 2) {
        return numbers;
    }

    int n = numbers.size();
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    vector<float> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = (numbers[i] - minVal) / (maxVal - minVal);
    }

    return result;
}