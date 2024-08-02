#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

bool has_close_elements(initializer_list<float> numbers, float threshold) {
    vector<float> numList(numbers);
    sort(numList.begin(), numList.end());
    for (int i = 0; i < numList.size() - 1; ++i) {
        if (abs(numList[i] - numList[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}