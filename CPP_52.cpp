#include <vector>

bool below_threshold(const vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    // Input reading and vector creation
    int threshold;
    vector<int> numbers;
    
    // Call the function below_threshold
    if (below_threshold(numbers, threshold)) {
        // Do something if true
    } else {
        // Do something if false
    }

    return 0;
}