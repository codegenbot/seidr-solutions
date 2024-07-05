#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = fabs(numbers[1] - numbers[0]);
    int index = 0;
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    return {numbers[index], numbers[index + 1]};
}