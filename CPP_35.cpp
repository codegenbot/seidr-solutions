#include <algorithm>
#include <cmath>

int findMaximumSumSubarray(std::vector<int> l) {
    int max_sum = -1e9;
    for(int i = 0; i < (int)l.size(); i++) {
        for(int j = i; j < (int)l.size(); j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += l[k];
                max_sum = std::max(max_sum, abs(sum));
            }
        }
    }
    return max_sum;
}