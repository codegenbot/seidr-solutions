#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> f(int n){
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int solveProblem(){
    int n;
    std::cin >> n;
    std::vector<int> result = f(n);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}