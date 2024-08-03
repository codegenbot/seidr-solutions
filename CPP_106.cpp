#include <vector>
#include <cassert>

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

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}