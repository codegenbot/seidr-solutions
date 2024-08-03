#include <vector>

bool issame(const std::vector<int>& arr) {
    if (arr.empty()) {
        return false;
    }
    int first = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] != first) {
            return false;
        }
    }
    return true;
}

std::vector<int> f(int n) {
    std::vector<int> res;
    int sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            fact *= i;
            res.push_back(fact);
        } else {
            sum += i;
            res.push_back(sum);
        }
    }
    return res;
}