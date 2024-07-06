#include <vector>
#include <stdbool.h>

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    int minEvenValueIndex = -1;
    int minEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenValueIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minEvenValueIndex);
    } else {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 1 && minEvenValue > arr[i]) {
                minEvenValue = arr[i];
                minEvenValueIndex = i;
            }
        }
        result.push_back(minEvenValue);
        result.push_back(minEvenValueIndex);
    }

    return result;
}