#include <vector>
#include <limits>

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    int minEvenValueIndex = -1;
    int minEvenValue = numeric_limits<int>::max();

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenValueIndex = i;
        }
    }

    if (minEvenValue != numeric_limits<int>::max()) {
        result.push_back(minEvenValue);
        result.push_back(minEvenValueIndex);
    }

    return result;
}