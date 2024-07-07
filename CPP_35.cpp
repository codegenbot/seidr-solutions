#include <algorithm>
#include <cmath>

int findMaximumValue(vector<int> numbers) {
    if (numbers.empty()) {
        throw runtime_error("Error: The input vector is empty.");
    }
    
    int maximum = *max_element(numbers.begin(), numbers.end());
    
    return maximum;
}