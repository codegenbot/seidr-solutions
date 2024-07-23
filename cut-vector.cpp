#include <vector>
#include <utility>
#include <limits> // for INT_MAX
#include <cmath>  // for abs
#include <climits> // for INT_MAX

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for(int i = 1; i < v.size(); i++) {
        int diff = std::abs(v[i] - v[0]);
        if(diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    std::vector<int> left(v.begin(), v.begin() + cut_index);
    std::vector<int> right(v.begin() + cut_index, v.end());
    return {left, right};
}