#include <vector>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    for (int i = 1; i <= v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    std::pair<std::vector<int>, std::vector<int>> res;
    res.first = std::vector<int>();
    res.second = std::vector<int>();
    for (int j = 0; j < pos; j++) {
        res.first.push_back(v[j]);
    }
    for (int j = pos; j < v.size(); j++) {
        res.second.push_back(v[j]);
    }
    return res;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    auto result = cutVector(input);
    // do something with the result
    return 0;
}