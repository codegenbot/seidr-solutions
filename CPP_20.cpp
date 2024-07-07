#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) return {};

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest_pair = make_pair(min(min_diff, numbers[i]), max(min_diff, numbers[j]));
            }
        }
    }
    
    return {closest_pair};
}