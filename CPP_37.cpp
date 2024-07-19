#include <vector>
#include <algorithm>

float* sort_even(float arr[], int n) {
    float* result = new float[n];
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            std::vector<float> evenVals;
            for (int j = 0; j < n; j++) {
                if (arr[j] % 2.0 == 0.0) {
                    evenVals.push_back(arr[j]);
                }
            }
            std::sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = arr[i];
        }
    }
    return result;
}