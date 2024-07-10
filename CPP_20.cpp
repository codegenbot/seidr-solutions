Here is the completed code:

#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    return vector<float>(closest_pair.begin(), closest_pair.end());
}