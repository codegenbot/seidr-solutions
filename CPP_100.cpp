#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (is_same(std::vector<int>{i}, std::vector<int>{n})) {
            result.push_back(i);
        }
    }
    return result;
}

int solve_problem_cpp100() {
    int n;
    std::cin >> n;
    std::vector<int> result = make_a_pile(n);
    
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}

int main() {
    assert(is_same(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}