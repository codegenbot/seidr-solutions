#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    float minDiff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < minDiff) {
                minDiff = abs(diff);
                result = {{numbers[i], numbers[j]}};
            } else if (abs(diff) == minDiff) {
                result.push_back({{numbers[i], numbers[j]}});
            }
        }
    }
    return result;
}