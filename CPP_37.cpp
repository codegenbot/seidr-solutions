```cpp
#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size()), evenVals, oddVals;
    
    // Separate the array into two parts: one with even values and one with odd values
    for (float num : l) {
        if (num % 2 == 0) {
            evenVals.push_back(num);
        } else {
            oddVals.push_back(num);
        }
    }
    
    // Sort the entire array
    sort(evenVals.begin(), evenVals.end());
    sort(oddVals.begin(), oddVals.end());
    
    int i = 0, j = 0;
    for (int k = 0; k < l.size(); k++) {
        if (k % 2 == 0) {
            result[k] = evenVals[i++];
        } else {
            result[k] = oddVals[j++];
        }
    }
    
    return result;
}