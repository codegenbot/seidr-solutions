#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) {
        return array;
    }

    int sum = array[0] + array[array.size() - 1];
    vector<int> result = array;

    if (sum % 2 == 0) {
        sort(result.begin(), result.end());
    } else {
        sort(result.begin(), result.end(), greater<int>());
    }

    return result;
}