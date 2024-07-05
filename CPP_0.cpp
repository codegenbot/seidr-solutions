#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (fabs(numbers[i] - numbers[i-1]) < threshold) {
            return true;
        }
    }
    return false;
}