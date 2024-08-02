#include <algorithm>

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    if (!lst.empty()) {
        int max_negative = 0;
        int min_positive = INT_MAX;

        for (int num : lst) {
            if (num < 0 && num > max_negative) {
                max_negative = num;
            } else if (num > 0 && num < min_positive) {
                min_positive = num;
            }
        }

        result.push_back(max_negative);
        result.push_back(min_positive);
    } else {
        result.push_back(0);
        result.push_back(0);
    }

    return result;
}