#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_pair = {numbers[0], numbers[1]};

    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return {closest_pair.first, closest_pair.second};
}