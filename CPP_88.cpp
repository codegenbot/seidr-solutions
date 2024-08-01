#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        return vector<int>(array.begin(), array.end());
    } else {
        vector<int> result(array);
        sort(result.begin(), result.end());
        reverse(result.begin(), result.end());
        return result;
    }
}