#include <vector>
int getNegativeIndex(vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    // Check if all elements are positive
    if (sum >= 0) {
        return 0;
    }
    return -1;
}