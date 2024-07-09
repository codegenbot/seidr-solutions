#include <algorithm>

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array.back();
    if (sum % 2 == 1) {
        return vector<int>(array.begin(), array.end());
    } else {
        return vector<int>(array.rbegin(), array.rend());
    }
}