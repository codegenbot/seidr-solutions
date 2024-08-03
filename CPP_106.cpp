#include <vector>

bool issame(const std::vector<int>& res1, const std::vector<int>& res2) {
    if (res1.size() != res2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < res1.size(); ++i) {
        if (res1[i] != res2[i]) {
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