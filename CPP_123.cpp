#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n){
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::vector<int> odd_result;
    std::copy_if(result.begin(), result.end(), std::back_inserter(odd_result), [](int num){ return num % 2 != 0; });
    std::sort(odd_result.begin(), odd_result.end());
    return odd_result;
}

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> get_odd_collatz(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}