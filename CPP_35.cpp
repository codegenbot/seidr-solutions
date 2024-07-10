#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int findMax(vector<int> arr) {
    int maxVal = *max_element(arr.begin(), arr.end());
    if (maxVal < 0) {
        return -1;
    } else {
        return maxVal;
    }
}